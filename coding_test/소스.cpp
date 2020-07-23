#include <iostream>
using namespace std;
#include <algorithm>

int main() {
	int N, w;
	int *sweet;
	int answer = 0;

	cin >> N >> w;
	sweet = new int[N];
	int count3 = 0, count5 = 0;
	for (int i = 0; i < N; i++) {
		int tmpt, tmps;
		cin >> tmpt >> tmps;

		if (tmpt == 3) {
			count3++;
			sweet[count3 - 1] = tmps;
		}
		else if (tmpt == 5) {
			count5++;
			sweet[N - count5] = tmps;
		}
	}
	
	if (count5 * 5 + count3 * 3 >= w) {
		sort(sweet, sweet + count3);
		sort(sweet + N - count5, sweet + N);

		int c5 = w / 5;
		for (int i = c5; i >= 0; i--) {
			int c3 = (w - (i * 5)) / 3;
			int tmp = 0;

			for (int a = 0; a < c3; a++) {
		 		tmp += sweet[count3 - a - 1];
			}

			for (int a = 0; a < i; a++) {
				tmp += sweet[N - a - 1];
			}

			if (answer < tmp) answer = tmp;
		}
	}
	else {
		for (int i = 1; i <= count5; i++)
			answer += sweet[N - i];
		for (int i = 0; i < count3; i++)
			answer += sweet[i];
	}

	cout << answer << endl;
	delete[] sweet;
}