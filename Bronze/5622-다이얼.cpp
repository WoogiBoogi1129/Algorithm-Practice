#include <iostream>
#include <cstring>

using namespace std;
int result = 0;

void calMinTime(string SS) {
	int len = SS.length();
	for (int i = 0; i < len; i++) {
		if (SS[i] <= 'C' && SS[i] >= 'A') {
			result += 2;
		}
		else if (SS[i] <= 'F' && SS[i] >= 'D') {
			result += 3;
		}
		else if (SS[i] <= 'I' && SS[i] >= 'G') {
			result += 4;
		}
		else if (SS[i] <= 'L' && SS[i] >= 'J') {
			result += 5;
		}
		else if (SS[i] <= 'O' && SS[i] >= 'M') {
			result += 6;
		}
		else if (SS[i] <= 'S' && SS[i] >= 'P') {
			result += 7;
		}
		else if (SS[i] <= 'V' && SS[i] >= 'T') {
			result += 8;
		}
		else if (SS[i] <= 'Z' && SS[i] >= 'W') {
			result += 9;
		}
	}
	result += len;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string S;

	cin >> S;
	calMinTime(S);

	cout << result;

	return 0;
}