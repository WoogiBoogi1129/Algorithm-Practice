#include <iostream>
#include <queue>

#define MAX 101
using namespace std;
int n, target1, target2, m, x, y;
int arr[MAX][MAX];
int visit[MAX];
queue<int> q;

void bfs(int k) {
	q.push(k);

	while (!q.empty()) {
		k = q.front();
		q.pop();

		for (int i = 1; i <= n; i++) {
			if (arr[k][i] != 0 && !visit[i]) {
				q.push(i);
				visit[i] = visit[k] + 1;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	cin >> target1 >> target2;
	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		arr[x][y] = 1;
		arr[y][x] = 1;
	}

	bfs(target1);

	if (visit[target2] == 0) {
		visit[target2] = -1;
	}

	cout << visit[target2];

	return 0;
}