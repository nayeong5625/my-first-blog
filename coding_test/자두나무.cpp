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
				//time-1 �� �� ���� ����ִ� ��츸 ����ؾ���
				if (dp[jadoo_p][move][time - 1] >= 0) {
					if (jadoo_p == jadoo[time]) {
						dp[jadoo_p][move][time] = dp[jadoo_p][move][time - 1] + 1; //�ȿ����̰� ����
					}
					else {
						if (move != 0) {
							//�������� ���� result���� +1 �Ǵ� ���̶� ���� �������� �̸� �����ִ� result ���̶� ���ؼ� �� ū �� �ֱ�
							dp[jadoo[time]][move - 1][time] = max(dp[jadoo_p][move][time - 1] + 1, dp[jadoo[time]][move - 1][time]); //�����̰� ����
						}
						dp[jadoo_p][move][time] = dp[jadoo_p][move][time - 1]; //�ȿ����̰� �ȹ���
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