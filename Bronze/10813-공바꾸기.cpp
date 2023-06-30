/*
* 바구니를 총 N개 가지고 있음
* 바구니의 번호는 1~N까지 주어짐
* 바구니에는 공이 1개 씩 들어있고 처음에는 바구니에 적혀있는 번호와 같은 공이 들어있음
* 도현이는 앞으로 M번 공을 바꿀거임
* 도현이는 1번 공을 바꿀 때 바구니 2개를 선택하고 두 바구니에 들어있는 공을 서로 교환함
* 공을 어떻게 바꿀 지 주어졌을 때 M번 공을 바꾼 이후에 각 바구니에 어떤 공이 있는지 구해야함
* 
* 입력은 N M
* i j 공을 바꿈
* 
* 출력
* 바구니의 공 번호를 출력
*/

#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M;
	int ball[101];
	int first, end;
	int temp;

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		ball[i] = i;
	}

	for (int i = 0; i < M; i++) {
		cin >> first >> end;
		temp = ball[first];
		ball[first] = ball[end];
		ball[end] = temp;
	}

	for (int i = 1; i <= N; i++) {
		cout << ball[i] << " ";
	}
	return 0;
}