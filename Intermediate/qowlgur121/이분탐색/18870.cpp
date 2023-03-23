#include <iostream>
#include <vector>
#include <algorithm>

int n;
int x[1000005];
std::vector<int> tmp, unique;

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> x[i];
		tmp.push_back(x[i]);
	}
	std::sort(tmp.begin(), tmp.end());
	for (int i = 0; i < n; i++) {
		if (i == 0 || tmp[i - 1] != tmp[i])	//제일 앞의 원소이거나 자기 앞의 원소와 자신이 다르다면 unique에 넣는다.
			unique.push_back(tmp[i]);
	}
	for (int i = 0; i < n; i++) {
		std::cout << std::lower_bound(unique.begin(), unique.end(), x[i]) - unique.begin() << ' ';
		//lower_bound 함수를 통해 원본 벡터의 i번째 원소가 복사본 벡터에서 몇번째에 위치 하는지 확인한다.(이 때 lower_bound는 주소값을 반환)
		
		
		//x[i]가 등장하는 인덱스.
	}
}
