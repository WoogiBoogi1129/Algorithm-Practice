#include <iostream>
#include <queue>

#define MAX 100001

using namespace std;

int N, K;
int result[MAX];
queue<int> q;

int bfs() {
	q.push(N);

	while (!q.empty()) {
		int f = q.front();
		q.pop();

		if (f == K) {
			return result[f];
		}
		if (f - 1 >= 0 && result[f - 1] == 0) {
			q.push(f - 1);
			result[f - 1] = result[f] + 1;
		}
		if (f + 1 < MAX && result[f + 1] == 0) {
			q.push(f + 1);
			result[f + 1] = result[f] + 1;
		}
		if (f * 2 < MAX && result[2 * f] == 0) {
			q.push(2 * f);
			result[2 * f] = result[f] + 1;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N >> K;
	cout << bfs();
	return 0;
}