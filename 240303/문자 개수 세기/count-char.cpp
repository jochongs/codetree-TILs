#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    getline(cin, str);

    char includeAlphabet = 'e';
    cin >> includeAlphabet;

    int cnt = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == includeAlphabet) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}