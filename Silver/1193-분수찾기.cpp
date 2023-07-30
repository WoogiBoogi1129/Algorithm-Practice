#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;

    int i = 1;
    while (N > i) {
        N -= i;
        i++;
    }

    if (i % 2 == 1) {
        cout << i + 1 - N << '/' << N << '\n';
    }
    else {
        cout << N << '/' << i + 1 - N << '\n';
    }
    return 0;
}