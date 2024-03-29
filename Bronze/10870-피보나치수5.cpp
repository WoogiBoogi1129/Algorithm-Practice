#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;

	int dp[21];

	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= 20; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	cin >> n;

	cout << dp[n];
	return 0;
}