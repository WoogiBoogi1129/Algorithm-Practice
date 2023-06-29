/*
* 도현이는 바구니 N개 가지고 있음
* 1번부터 N번까지 번호 매겨짐
* 1번부터 N번까지 적혀있는 공을 많이 가지고 있음
* 첫 바구니에는 공 X 바구니에는 공을 1개만 넣을 수 있음
* 도현이는 M번 공을 넣으려고 함
* 공을 한번 넣을 때 공을 넣을 바구니 범위를 정하고 정한 바구니에 모두 같은 번호가 적혀있는 공을 넣음
* 마지막에 들어있을 공을 바구니별로 출력한다.
*/
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int bucket[101] = {0};
	int N, M;
	int first, last, ball;

	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> first >> last >> ball;

		for (int j = first; j <= last; j++) {
			bucket[j] = ball;
		}
	}

	for (int i = 1; i <= N; i++) {
		cout << bucket[i] << " ";
	}
	return 0;
}