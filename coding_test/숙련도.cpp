/*#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int num, total, choice, i = 0, sum = 0;
	int arr[100], summ[10], fin[10];
	cin >> num;
	for (int n = 0; n < num; n++) {
		cin >> total >> choice;
		for (int i = 0; i < total; i++)
			cin >> arr[i];
		sort(arr, arr + total);

		for (int i = 0; i < total - choice + 1; i++) {
			for (int j = 0; j < choice - 1; j++) {
				int add = arr[i + choice - 1] - arr[i + j];
				sum = sum + add;
			}
			summ[i] = sum;
			sum = 0;
		}
		sort(summ, summ + (total - choice + 1));
		fin[n] = summ[0];
	}
	for (int i = 0; i < num; i++)
		cout << i + 1 << "¹Ý : " << fin[i] << "½Ã°£" << endl;
	cout << endl;
}*/
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int num, total, choice, i = 0, sum = 0;
	//int arr[100000], summ[1000], fin[1000];
	cin >> num;
	int *arr = new int[num];
	int *fin = new int[num];
	for (int n = 0; n < num; n++) {
		cin >> total >> choice;
		for (int i = 0; i < total; i++)
			cin >> arr[i];
		sort(arr, arr + total);
	int *summ = new int[num - choice + 1];
	
		for (int i = 0; i < total - choice + 1; i++) {
			for (int j = 0; j < choice - 1; j++) {
				int add = arr[i + choice - 1] - arr[i + j];
				sum = sum + add;
			}
			summ[i] = sum;
			sum = 0;
		}
		sort(summ, summ + (total - choice + 1));
		fin[n] = summ[0];
		delete[] summ;
		
	}
	for (int i = 0; i < num; i++)
		cout << "Case #" << i + 1 << ": " << fin[i] << endl;
	delete[] arr;
	delete[] fin;
}