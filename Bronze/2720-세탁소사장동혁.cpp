/*
* 쿼터 = 0.25
* 다임 = 0.1
* 니켈 = 0.05
* 페니 = 0.01
* 
* 거스름돈 출력
*/
#include <iostream>

using namespace std;

int T;
int C;
int Q, D, N, P;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> C;
		Q = 0, D = 0, N = 0, P = 0;
		if (C >= 25) {
			Q = C / 25;
			C = C % 25;
		}
		if (C >= 10) {
			D = C / 10;
			C = C % 10;
		}
		if (C >= 5) {
			N = C / 5;
			C = C % 5;
		}
		if (C >= 1) {
			P = C / 1;
			C = C % 1;
		}

		cout << Q << " " << D << " " << N << " " << P << '\n';
	}

	return 0;
}