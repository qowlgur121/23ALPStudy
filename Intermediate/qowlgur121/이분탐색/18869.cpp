#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int m, n;
int arr[102][10002];

void compress(int a[]) {
    vector<int> v(a, a + n);    //18870 좌표압축처럼 unique벡터를 선언
    sort(v.begin(), v.end());   //각 우주에 대한 행성 크기를 정렬.
    v.erase(unique(v.begin(), v.end()), v.end());   //행성 크기 중복을 제거
    for (int i = 0; i < n; i++)     
        a[i] = lower_bound(v.begin(), v.end(), a[i]) - v.begin();   //각 행성 크기가 정렬된 배열에서 몇 번째 위치에 있는지를 저장
}

bool compare(int a[], int b[]) {    //두 우주의 압축된 행성 크기를 비교한다.
    for (int k = 0; k < n; k++) 
        if (a[k] != b[k]) return false; //각 우주의 압축된 행성크기가 모두 같으면 true를 반환하고 아니면 false반환
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) cin >> arr[i][j];
        compress(arr[i]);   //각 우주에 대한 행성 크기를 압축한다.
    }

    int ans = 0;
    for (int i = 0; i < m - 1; i++)
        for (int j = i + 1; j < m; j++)
            ans += compare(arr[i], arr[j]); //compare 함수를 호출하여 균등한 우주의 쌍의 개수를 구하고 쌍의 개수를 구한다.
    cout << ans;
}
