#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int A, B, C;
	int result[3];

	cin >> A >> B >> C;

	result[0] = A;
	result[1] = B;
	result[2] = C;

	sort(result, result + 3);

	cout << result[1];
	return 0;
}