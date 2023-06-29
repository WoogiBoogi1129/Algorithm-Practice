#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    int arr[1000] = { 0 };
    int pn = 0;
    int pn_c = 0;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        for (int j = 1; j <= arr[i]; j++) {
            if (arr[i] % j == 0) {
                pn++;
            }
        }
        if (pn == 2) {
            pn_c++;
        }
        pn = 0;
    }

    cout << pn_c;
    return 0;
}