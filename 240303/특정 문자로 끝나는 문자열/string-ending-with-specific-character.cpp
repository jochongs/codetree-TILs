#include <iostream>
using namespace std;

bool includeState(string str, char alphabet) {
    if (str[str.length() - 1] != alphabet) {
        return false;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string strArr[10] = {};
    for (int i = 0; i < 10; i++) {
        cin >> strArr[i];
    }

    char alphabet = ' ';
    cin >> alphabet;

    int cnt = 0;
    for (int i = 0; i < 10; i++) {
        string str = strArr[i];
        if (includeState(str, alphabet)) {
            cout << str << '\n';
            cnt++;
        }
    }

    if (!cnt) {
        cout << "None";
    }

    return 0;
}