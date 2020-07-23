#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main() {
	long a, b, cnt = 0;
	vector <bool> score;
	while (1) {
		cnt = 0;
		cin >> a >> b;
		if (a == 0 && b == 0) break;
		while (1) {
			if (a >= b) {
				if (a%b == 0) {
					cnt++;
					break;
				}
				else if (a / b >= 2) {
					cnt++;
					break;
				}
				else if (a / b == 1) {
					cnt++;
					a = a - b;
					continue;
				}
			}
			else {
				if (b%a == 0) {
					cnt++;
					break;
				}
				else if (b / a >= 2) {
					cnt++;
					break;
				}
				else if (b / a == 1) {
					cnt++;
					b = b - a;
					continue;
				}
			}
		}
		if (cnt != 0) {
			if (cnt % 2 == 0)
				score.push_back(false);
			else
				score.push_back(true);
		}
		else continue;
	}
	for (int i = 0; i < score.size(); i++)
		if (score[i])
			cout << "A wins" << endl;
		else
			cout << "B wins" << endl;
}