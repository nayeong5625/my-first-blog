#include<iostream>
using namespace std;

int main() {
	int i, j, n;
	int *arr1, *arr2;
	char ans;
		
	while (1) {
		cout << "한 변의 길이 입력 : ";
		cin >> n;
		if (n < 1 || 16 < n)
			return 0;
		arr1 = new int[n];
		arr2 = new int[n];
		if (!(arr1 && arr2))
			return 0;
		cout << "첫번째 배열 입력 : ";
		for (int j = 0; j < n; j++)
			cin >> arr1[j];
		cout << "두번째 배열 입력 : ";
		for (int j = 0; j < n; j++)
			cin >> arr2[j];
		for (int i = 0; i < n; i++) {
			arr1[i] = arr1[i] | arr2[i];
			for (j = n - 1; j >= 0; j--) {
				if (arr1[i] & (1 << j))
					cout << '#';
				else
					cout << ' ';
			}
			cout << endl;
		}
		delete arr1, arr2;
		cout << "계속 하시겠습니까?(n누르면 종료) >> ";
		cin >> ans;	
		if (ans == 'n')
			break;
	}
}