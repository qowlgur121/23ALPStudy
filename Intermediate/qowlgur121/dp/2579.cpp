#include <iostream>

int d[301];
int s[301];

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int n;
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		std::cin >> s[i];
	}

	d[1] = s[1];
	d[2] = s[1] + s[2];
	d[3] = std::max(s[1] + s[3], s[2] + s[3]);
	for (int i = 4; i <= n; i++) {
		d[i] = std::max(d[i - 3] + s[i - 1] + s[i], d[i - 2] + s[i]);
	}

	std::cout << d[n]<<'\n';
	return 0;
}
