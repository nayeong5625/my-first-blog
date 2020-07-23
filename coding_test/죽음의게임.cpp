#include<iostream>
using namespace std;

int main() {
	int N, K, a, loc = 0, cnt = 0;
	cin >> N >> K;
	int *arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> a;
		arr[i] = a;
	}
	while (cnt < N) {
		if (arr[loc] == K) {
			cnt++;
			break;
		}
		else {
			loc = arr[loc];
			cnt++;
		}		
	}
	if (cnt < N)
		cout << cnt << endl;
	else
		cout << "-1" << endl;
	delete[] arr;
}