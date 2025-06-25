#include<iostream>
using namespace std;

int main() {
	long double x, y, z, cnt = 0;
	cin >> x >> y;
	z = y - x;
	for (int i = 1; i <= z; i++) {	
		if (z == i) {
			cnt++;
			break;
		}
		else if (z < i) {
			cnt++;
			break;
		}
		else if (z - i < i) {
			cnt ++;
			z = z - i;
		}
		else {
			z = z - (2 * i);
			cnt += 2;
		}		
		if (z == 0)
			break;
		else if (z <= i) {
			cnt++;
			break;
		}
	}
	cout << (int)cnt << endl;
}