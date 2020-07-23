#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	long long N, total = 0;
	int arr[6];
	cin >> N;
	for (int i = 0; i < 6; i++)
		cin >> arr[i];
	if (N == 1) {
		sort(arr, arr + 6);
		for (int i = 0; i < 5; i++)
			total = total + arr[i];
		cout << total << endl;
	}
	else {
		arr[0] = arr[0] < arr[5] ? arr[0] : arr[5];
		arr[1] = arr[1] < arr[4] ? arr[1] : arr[4];
		arr[2] = arr[2] < arr[3] ? arr[2] : arr[3];
		sort(arr, arr + 3);
		total = 4 * (arr[0] + arr[1] + arr[2]) + (4 * ((N - 1) + (N - 2)))*(arr[0] + arr[1]) + (5 * (N - 2)*(N - 2) + 4 * (N - 2))*arr[0];
		cout << total << endl;
	}
}