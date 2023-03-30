#include <iostream>
#include <algorithm>

int n;
//r=0,g=1,b=1
int s[1001][3];	//집의 색의 값
int dp[1001][3];	//i번째 집을 고려, rgb 집의 색

int main() {
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		std::cin >> s[i][0] >> s[i][1] >> s[i][2];
	}

	for (int i = 0; i < 3; i++) {
		dp[1][i] = s[1][i];
	}
	for (int i = 2; i <= n; i++) {
		dp[i][0] = s[i][0] + std::min(dp[i - 1][1], dp[i - 1][2]);
		dp[i][1] = s[i][1] + std::min(dp[i - 1][0], dp[i - 1][2]);
		dp[i][2] = s[i][2] + std::min(dp[i - 1][0], dp[i - 1][1]);
	}
	int ans = std::min(std::min(dp[n][0], dp[n][1]),dp[n][2]);
	std::cout << ans << std::endl;

	return 0;

}
