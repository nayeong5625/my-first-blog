#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int t, n;
	string num;

	cin >> t;
	for (int i = 0; i < t; i++) {
		vector <string> number;
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> num;
			number.push_back(num);
		}
		sort(number.begin(), number.end());

		int cnt = 0;
		for (int j = 0; j < n - 1; j++) {
			if (number[j].size() >= number[j + 1].size()) {
				cnt++;
				continue; //sort하면 일관성 없는 애는 무조건 뒤쪽에 옴
			}
			if (number[j] == number[j + 1].substr(0, number[j].size())) {
				cout << "NO\n";
				cnt--;
				break;
			}
			cnt++;
		}
		if (cnt == n - 1) cout << "YES\n";
	}

	return 0;
}