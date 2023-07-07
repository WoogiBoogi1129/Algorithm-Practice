#include <iostream>
#include <string>
using namespace std;
int main() {
    int apbt[26] = { 0, }, dif = 0, cnt = 0, sum = 0, N;
    string word;
    cin >> N;
    for (int j = 0; j < N; j++) {
        cin >> word;
        for (int i = 0; i < word.length(); i++) {
            apbt[word[i] - 'a'] = 1;
            if (word[i] != word[i + 1]) {
                dif++;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (apbt[i] == 1)
                cnt++;
            apbt[i] = 0;
        }
        if (cnt == dif)
            sum++;

        cnt = 0; dif = 0;
    }

    cout << sum << endl;

    return 0;
}