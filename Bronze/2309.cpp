/*
* 7난쟁이의 키의 합은 100
* 주어지는 키는 100을 넘지않는 자연수 int형
* 9난쟁이의 키는 모두 다름
* 가능한 정답이 여러가지면 아무거나 출력함
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int arr[9] = { 0 };
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	sort(arr, arr + 9);

	for (int i = 0; i < 9; i++) {
		for (int j = 1; j < 9; j++) {
			if (sum - arr[i] - arr[j] == 100) {
				arr[i] = arr[j] = 0;
				for (int k = 0; k < 9; k++) {
					if (arr[k] != 0) {
						cout << arr[k] << '\n';
					}
				}
				return 0;
			}
		}
	}
	return 0;
}