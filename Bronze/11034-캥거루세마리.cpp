/*
* 캥거루 초기 위치 A,B,C가 주어짐
* A,B / B,C의 거리를 확인
* 거리가 가장 먼 사이의 차 - 1 이 답인듯
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int A, B, C;

	while (cin >> A >> B >> C) {
		cout << max(B - A, C - B) - 1 << '\n';
	}
	
	return 0;
}