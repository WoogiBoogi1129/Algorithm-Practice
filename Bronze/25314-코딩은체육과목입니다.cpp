/*
* 두 수를 더하는 문제
* 만약 입출력이 N바이트 크기의 정수라면 어떻게 프로그램을 구현해야하는가?
* long int = 4byte
* ling long int = 8byte
* N바이트의 정수라고 했을 때, 4bytes 마다 long을 하나 붙여 출력하는 코드를 작성
*/
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	int numLoop = 0;

	cin >> N;

	if (N % 4 == 0) {
		numLoop = N / 4;
	}
	else {
		numLoop = (N / 4) + 1;
	}

	for (int i = 0; i < numLoop; i++) {
		cout << "long ";
	}

	cout << "int" << "\n";

	return 0;
}