#include <iostream>
#include <vector>
#include <algorithm>

int n;
int a[1005];
std::vector<int> two;

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cin >> n;
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	std::sort(a, a + n);
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++)
			two.push_back(a[i] + a[j]);
	}

	std::sort(two.begin(), two.end());
	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (binary_search(two.begin(), two.end(), a[i] - a[j])) { //가장 큰 값부터 i
				std::cout << a[i];
				return 0;
			}
		}
	}

}
