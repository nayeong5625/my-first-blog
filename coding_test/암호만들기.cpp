/*#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

char arr[16];
int L, C;
void made(int num, int add, string s, int a, int b) {
	if (add == L) {
		if (a >= 1 && b >= 2)
			cout << s << endl;
		return;
	}
	for (int i = num; i < C; i++) {
		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
			made(i + 1, add + 1, s + arr[i], a + 1, b);
		else
			made(i + 1, add + 1, s + arr[i], a, b + 1);
	}
}

int main() {	
	cin >> L >> C;
	for (int i = 0; i < C; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + C);
	made(0, 0, "", 0, 0);
	return 0;
}*/