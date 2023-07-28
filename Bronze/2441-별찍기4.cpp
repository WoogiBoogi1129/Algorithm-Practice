#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, i, j, k;

	cin >> n;

	for (i = n; i > 0; i--) {
		for (k = 0; k < n-i; k++) {
			cout << ' ';
		}
		for (j = i; j > 0; j--) {
			cout << '*';
		}
		cout << '\n';
	}
	return 0;
}