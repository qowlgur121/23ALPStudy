#include <iostream>
#include <vector>
#include <algorithm>

int a[1000005];

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
	std::sort(a, a + n);

	int m;
	std::cin >> m;
	for (int i = 0; i < m; i++) {
		int x;
		std::cin >> x;
		std::cout<<std::binary_search(a, a + n, x)<<' ';
	}
}
