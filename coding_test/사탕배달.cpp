/*#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n, weight;
	cin >> n >> weight;
	int *N = new int[n];
	int w5 = weight / 5;
	int w3 = (weight - 5 * w5) / 3;
	for(int i=0;i<)
	
}*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, w;
	int tmp1, tmp2;
	int result = 0;
	int cnt3 = 0, cnt5 = 0;
	cin >> n >> w;
	int *can3 = new int[n];
	int *can5 = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> tmp1 >> tmp2;
		if (tmp1 == 3) {
			cnt3++;
			can3[cnt3 - 1] = tmp2;
		}
		else if (tmp1 == 5) {
			cnt5++;
			can5[cnt5 - 1] = tmp2;
		}
	}

	sort(can3, can3 + cnt3);
	sort(can5, can5 + cnt5);
	if (w >= (3 * cnt3 + 5 * cnt5)) {
		int sum = 0;
		for (int r = 0; r < cnt5; r++) sum += can5[cnt5 - r - 1];
		for (int r = 0; r < cnt3; r++) sum += can3[cnt3 - r - 1];
		result = sum;
	}
	else {
		for (int n5 = w / 5; n5 >= 0; n5--) {
			int n3 = (w - 5 * n5) / 3;
			int sum = 0;
			for (int r = 0; r < n5; r++) sum += can5[cnt5 - r - 1];
			for (int r = 0; r < n3; r++) sum += can3[cnt3 - r - 1];
			if (sum > result) result = sum;

		}
	}
	cout << result << endl;
	delete[] can3;
	delete[] can5;
}