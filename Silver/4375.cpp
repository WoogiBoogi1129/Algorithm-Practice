/*
* 2와 5로 나누어 떨어지지 않는 정수 n
* 각 자릿수가 모두 1로만 이루어진 n의 배수를 찾는 프로그램을 작성
*/

#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, i;
	while (cin >> n) {
		int ans = 1;
		i = 1;

		while (1) {
			if (ans % n == 0) {
				break;
			}
			else {
				i++;
				ans = ans * 10 + 1;
				ans %= n;
			}
		}

		cout << i << '\n';
	}
	
	return 0;
}