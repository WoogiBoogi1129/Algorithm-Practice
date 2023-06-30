/*
* 1~N 개의 바구니가 있고 바구니의 번호는 1~N이다.
* M번째 줄부터 바구니를 역순으로 바꾼다.
* 1 2 를 입력하면  1 2 3 4 5 바구니에서 2 1 3 4 5로 바뀌는 식
* 
* 입력
* N M
* 바꿀 바구니 시작-끝
* 
* 출력
* 바구니 번호 배열
*/

#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M;
	int bucket[101] = { 0 };
	int first, end, temp;
	
	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		bucket[i] = i;
	}

	for (int i = 0; i < M; i++) {
		cin >> first >> end;
		for (int j = 0; j <= (end - first) / 2; j++) {
			swap(bucket[first+j], bucket[end-j]);
		}
	}

	for (int i = 1; i <= N; i++) {
		cout << bucket[i] << " ";
	}
	return 0;
}