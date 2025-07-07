#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int times[1000][1000];
int x[4] = { 1, 0, -1, 0 };
int y[4] = { 0, 1, 0, -1 };

int main() {
	int r, c = 0;
	string m;
	vector <string> maze;
	queue<pair<int, int>> Q;
	pair<int, int> jihun;

	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		cin >> m;
		maze.push_back(m);
		for (int j = 0; j < c; j++) {
			if (maze[i][j] == 'F') Q.push({ i, j });
			else {
				times[i][j] = -1;
				if (maze[i][j] == 'J') jihun = { i,j };
			}
		}
	}

	while(!Q.empty()) {
		auto cur = Q.front(); Q.pop();
		for (int i = 0; i < 4; i++) {
			int xx = cur.first + x[i];
			int yy = cur.second + y[i];
			if (xx < 0 || xx >= r || yy < 0 || yy >= c) continue;
			if (maze[xx][yy] == '#') continue;
			if (times[xx][yy] != -1) continue;
			times[xx][yy] = times[cur.first][cur.second] + 1;
			Q.push({ xx, yy });
		}
	}

	times[jihun.first][jihun.second] = 0;
	Q.push(jihun);
	while (!Q.empty()) {
		auto cur = Q.front(); Q.pop();
		int next = times[cur.first][cur.second] + 1;
		for (int i = 0; i < 4; i++) {
			int xx = cur.first + x[i];
			int yy = cur.second + y[i];
			if (xx < 0 || xx >= r || yy < 0 || yy >= c) {
				cout << next;
				return 0;
			}
			if (maze[xx][yy] == '#') continue;
			if(times[xx][yy] != -1 && times[xx][yy] <= next) continue;
			times[xx][yy] = next;
			Q.push({ xx, yy });
		}
	}
	cout << "IMPOSSIBLE";
}