#include <iostream>

int n, m;
int a[100004];
int d[100004];


int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cin >> n >> m;
	d[0] = 0;
	for (int i = 1; i <= n; i++) {
		std::cin >> a[i];
		d[i] = d[i - 1] + a[i];
	}

	while (m--) {
		int i, j;
		std::cin >> i >> j;
		std::cout << d[j] - d[i - 1] << '\n';
	}
	return 0;
}
