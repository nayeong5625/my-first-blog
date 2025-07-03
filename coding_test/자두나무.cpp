#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int dp[3][31][1001];
int main() {
	int t, w, j;
	int result = 0;
	cin >> t >> w;

	vector<int> jadoo;
	jadoo.push_back(0);
	for (int i = 0; i < t; i++) {
		cin >> j;
		jadoo.push_back(j);
	}
	
	memset(dp, -1, sizeof(dp));
	dp[1][w][0] = 0;
	for (int time = 1; time <= t; time++) {
		for (int move = 0; move <= w; move++) {
			for (int jadoo_p = 1; jadoo_p <= 2; jadoo_p++) {
				//time-1 이 때 값이 들어있는 경우만 계산해야함
				if (dp[jadoo_p][move][time - 1] >= 0) {
					if (jadoo_p == jadoo[time]) {
						dp[jadoo_p][move][time] = dp[jadoo_p][move][time - 1] + 1; //안움직이고 받음
					}
					else {
						if (move != 0) {
							//움직여서 기존 result에서 +1 되는 값이랑 전에 움직여서 미리 갖고있던 result 값이랑 비교해서 더 큰 값 넣기
							dp[jadoo[time]][move - 1][time] = max(dp[jadoo_p][move][time - 1] + 1, dp[jadoo[time]][move - 1][time]); //움직이고 받음
						}
						dp[jadoo_p][move][time] = dp[jadoo_p][move][time - 1]; //안움직이고 안받음
					}
				}
			}
		}
	}

	for (int i = 0; i <= w; i++) {
		result = max({ result, dp[1][i][t], dp[2][i][t] });
	}
	cout << result;

	return 0;
}