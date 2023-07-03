#include <iostream>
#include <cstring>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string S;
	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> S;
		cout << S[0] << S.back() << '\n';
	}
	return 0;
}