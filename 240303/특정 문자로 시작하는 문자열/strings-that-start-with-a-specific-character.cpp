#include <iostream>
using namespace std;

bool startWith(string str, char alphabet) {
    if(str[0] != alphabet) return false;

    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;
    cin >> n;

    string strArr[20];
    for (int i = 0; i < n; i++) {
        cin >> strArr[i];
    }

    char alphabet = ' ';
    cin >> alphabet;

    int cnt = 0;
    int totalLength = 0;
    for (int i = 0; i < n; i++) {
        string str = strArr[i];
        if (startWith(str, alphabet)) {
            cnt++;
            totalLength += str.length();
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << cnt << ' ' << totalLength / double(cnt);

    return 0;
}