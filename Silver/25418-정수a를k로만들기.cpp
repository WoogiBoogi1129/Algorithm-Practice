#include <iostream>
#include <queue>
#include <algorithm>
#define MAX 1000001

using namespace std;

int A, K;
int result[MAX];

queue<int> q;

int bfs() {
	q.push(A);

	while (!q.empty()) {
		int f = q.front();
		q.pop();

		if (f == K) return result[f];
		if (f + 1 <= MAX && !result[f + 1]) {
			q.push(f + 1);
			result[f + 1] = result[f] + 1;
		}
		if (f * 2 <= MAX && !result[f * 2]) {
			q.push(f * 2);
			result[f * 2] = result[f] + 1;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> A >> K;
	cout << bfs();
	return 0;
}