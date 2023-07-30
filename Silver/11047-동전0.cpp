#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int N, K, result = 0;
	int arr[10] = {0};
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	while (K != 0) {
		if (K % arr[N - 1] >= 0) {
			result += K / arr[N - 1];
			K -= (K / arr[N - 1] * arr[N - 1]);
			N--;
		}
		else {
			N--;
		}
	}

	cout << result;
	return 0;
}