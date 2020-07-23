#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector <char> win;
	int N, a, b, at, bt, cnt = 0;
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		int arr[5] = { 0 }, ary[5] = { 0 };
		cin >> a;
		for (int j = 0; j < a; j++) {
			cin >> at;
			arr[at]++;
		}
		cin >> b;
		for (int j = 0; j < b; j++) {
			cin >> bt;
			ary[bt]++;
		}
		for (int j = 4; j > 0; j--) {
			if (arr[j] > ary[j]) {
				cnt = 1;
				break;
			}
			else if (arr[j] < ary[j]) {
				cnt = 2;
				break;
			}
			else;
		}
		if (cnt == 1)
			win.push_back('A');
		else if (cnt == 2)
			win.push_back('B');
		else
			win.push_back('D');
		cnt = 0;
	}
	for (int i = 0; i < win.size(); i++)
		cout << win.at(i) << endl;
}