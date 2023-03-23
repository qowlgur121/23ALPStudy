#include <iostream>
#include <vector>
#include <algorithm>

long long n, m;
long long sum;
int max = 0;
std::vector<int> v;
int ans;

/*
높이가 높을 수록 나무가 덜 잘리게 될 것이고, 적어도 M미터의 나무르 집에 가져갈 것이다.
그래서 절단기에 설정할 수 있는 높이의 최댓값을 구하는 프로그램을 작성

*/

int main() {

	std::cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		v.push_back(a);
		if (a >= max) {
			max = a;
		}
	}

	int left = 0;
	int right = max;

	while (left <= right) {
		int mid = (left + right) / 2;
		sum = 0;
		for (int i = 0; i < n; i++) {
			if (mid < v[i])
				sum = sum + (v[i] - mid);	//절단기 기준이 나무 길이보다 작아야 잘림
		}
		if (sum == m) {
			ans = mid;
			break;	//잘린 나무길이가 가져가려는 길이와 같으면 답이어서 break;
		}
		else if (sum > m) {
			if (ans < mid) {
				ans = mid;
			}	//나무길이를 최소화 하려면 절단기의 설정 길이를 최대로 하기
			left = mid + 1;
		}
		else if (sum < m) {
			right = mid - 1;
		}
	}
	std::cout << ans;
	return 0;
}
