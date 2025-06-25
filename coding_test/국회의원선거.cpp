#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, a, cnt = 0;
	cin >> n;
	vector<int> p;
	for (int i = 0; i < n; i++) {
		cin >> a;
		p.push_back(a);
	}

	p[0] = p[0] - 1;
	while (1) {
		int max_idx = max_element(p.begin(), p.end()) - p.begin();
		if (max_idx == 0) break;
		else if (max_idx != 0) {
			p[max_idx] -= 1;
			p[0] += 1;
			cnt++;
		}
	}
	cout << cnt;
}