#include<iostream>
using namespace std;

int main() {
	int ans, n, strike = 0, ball = 0;
	int answer1[3] = {};
	int *answer2 = new int[3];
	cin >> ans >> n;
	int *Ans = new int[n];

	answer1[0] = ans / 100;
	answer1[1] = (ans % 100) / 10;
	answer1[2] = (ans % 100) % 10;

	for (int i = 0; i < n; i++) {
		cin >> Ans[i];
	}
	
	for (int i = 0; i <= n; i++) {
		if (i == n) {
			cout << "FAIL" << endl;
			break;
		}
		answer2[0] = Ans[i] / 100;
		answer2[1] = (Ans[i] % 100) / 10;
		answer2[2] = Ans[i] % 10;
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				if (j == k) {
					if (answer2[j] == answer1[k])
						strike++;
				}
				else if (j != k) {
					if (answer2[j] == answer1[k])
						ball++;
				}
			}
		}
		if (strike == 3) {
			cout << strike << "S" << endl;
			cout << "SUCCESS" << endl;
			break;
		}
		else if ((strike == 0) && (ball == 0))
			cout << "OUT" << endl;
		else if (ball == 3)
			cout << ball << "B" << endl;
		else if ((strike == 1) && (ball == 1))
			cout << strike << "S " << ball << "B " << 3 - strike - ball << "O" << endl;
		else if ((strike > 0) && (ball == 0))
			cout << strike << "S " << ball << "B " << 3 - strike << "O" << endl;
		else if ((strike > 0) && (ball > 0) )
			cout << strike << "S " << ball << "B " << "0O" << endl;
		else if ((strike == 0) && (ball > 0))
			cout << strike << "S " << ball << "B " << "0O" << endl;
		strike = 0;
		ball = 0;
	}
	delete[] Ans, answer2;
}