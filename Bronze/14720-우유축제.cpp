// 딸기, 초코, 바나나 1개씩 돌아가면서 마심
// 딸기 0, 초코 1, 바나나 2임
// 전체 가게 수 주어짐

#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int arr[1001];
	int N, now_milk = 0, total = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (arr[i] == now_milk) {
			total++;
			now_milk++;
			if (now_milk == 3) {
				now_milk = 0;
			}
		}
	}

	cout << total;
	return 0;
}