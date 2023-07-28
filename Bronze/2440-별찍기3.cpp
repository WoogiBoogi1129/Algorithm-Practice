#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int i, j, N;

	cin >> N;

	for (i = N; i > 0; i--) {
		for (j = i; j > 0; j--) {
			cout << "*";
		}
		cout << '\n';
	}
	return 0;
}