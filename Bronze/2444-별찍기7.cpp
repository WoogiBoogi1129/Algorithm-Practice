#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	int i, j, k, l;
	cin >> N;

	for (i = 0; i < N; i++) {
		for (j = N-i; j > 1; j--) {
			cout << " ";
		}
		for (k = 0; k <= i; k++) {
			cout << "*";	
		}
		for (l = 0; l <= i - 1; l++) {
			cout << "*";
		}
		cout << '\n';
	}

	for (i = 1; i < N; i++) {
		for (j = 0; j < i; j++) {
			cout << " ";
		}
		for (k = N-j; k > 0; k--) {
			cout << "*";
		}
		for (l = N - j; l > 1; l--) {
			cout << "*";
		}
		cout << '\n';
	}
	return 0;
}