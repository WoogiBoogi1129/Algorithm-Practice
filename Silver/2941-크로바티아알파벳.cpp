/*
* c= / c- / dz= / d- / lj / nj / s= / z=
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string S;
	int result = 0;

	cin >> S;

	for (int i = 0; i < S.length(); i++) {
		if (S[i] == 'c') {
			if (S[i + 1] == '=' || S[i + 1] == '-') {
				i++;
			}
		}
		else if (S[i] == 'd') {
			if (S[i+1] == 'z') {
				if (S[i+2] == '=') {
					i = i + 2;
				}
			}
			if (S[i + 1] == '-') {
				i++;
			}
		}
		else if (S[i] == 'l') {
			if (S[i + 1] == 'j') {
				i++;
			}
		}
		else if (S[i] == 'n') {
			if (S[i + 1] == 'j') {
				i++;
			}
		}
		else if (S[i] == 's') {
			if (S[i+1] == '=') {
				i++;
			}
		}
		else if (S[i] == 'z') {
			if (S[i+1] == '=') {
				i++;
			}
		}
		result++;
	}

	cout << result;
	return 0;
}