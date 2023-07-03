#include <iostream>
#include <cstring>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string S;
	int C;

	cin >> S;
	cin >> C;

	cout << S[C-1];

	return 0;
}