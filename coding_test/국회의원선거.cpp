#include <iostream>
using namespace std;

int main() {
	int n, a, b, cnt = 0, max;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a;
		arr[i] = a;
	}
	for (int i = 1; i < n; i++) {
		max = 0;
		for (int j = 1; j < n; j++) {
			if (max < arr[j]) {
				max = arr[j];
				arr[j] = 0;
			}
		}
		if (arr[0] <= max) {
			b = (max - arr[0]) / 2 + 1;
			arr[0] += b;
			cnt += b;
		}
	}
	cout << cnt;
}