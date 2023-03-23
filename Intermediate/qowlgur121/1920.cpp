#include <iostream>
#include <algorithm>

int a[100005];
int n;

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cin >> n;
	for (int i = 0; i < n; i++)
		std::cin >> a[i];
	std::sort(a, a + n);
	int m;
	std::cin >> m;
	while (m--) {
		int t;
		std::cin >> t;
		std::cout << std::binary_search(a,a+n,t) << '\n';
	}
}
