#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N, t, p = 0;
	
	cin >> N;
	vector<pair<int, int>> tp;
	for (int i = 0; i < N; i++) {
		cin >> t >> p;
		tp.push_back(make_pair(t, p));
	}
	tp.push_back(make_pair(0, 0));
	
	vector<int> dp(N+1);
	for (int i = N-1; i >= 0; i--) {
		if (i + tp[i].first > N) dp[i] = dp[i + 1];
		else dp[i] = max(dp[i + 1], tp[i].second + dp[i + tp[i].first]);
	}

	cout << dp[0];

	return 0;
}