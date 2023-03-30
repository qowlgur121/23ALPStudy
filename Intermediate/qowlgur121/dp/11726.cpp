#include <iostream>
#include <vector>



int main() {
    int n;
    std::cin >> n;

    std::vector<int> dp(n+1);
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
    }

    std::cout << dp[n] << std::endl;

    return 0;
}
