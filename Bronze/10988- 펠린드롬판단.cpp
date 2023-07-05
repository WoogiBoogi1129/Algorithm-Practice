#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string S;

	cin >> S;
	int len = S.length();
	int last = len - 1;

	for (int i = 0; i <= len/2; i++) {
		if (S[i] != S[last-i]) {
			cout << "0";
			return 0;
		}
	}

	cout << "1";
	return 0;
}