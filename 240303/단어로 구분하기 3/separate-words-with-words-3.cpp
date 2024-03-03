#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string strArr[200];
    for (int i = 0; i < 100; i++) {
        cin >> strArr[i];
    }

    for (int i = 99; i >= 0; i--) {
        string str = strArr[i];

        if (str.length() == 0) {
            continue;
        }

        cout << strArr[i] << '\n';
    }

    return 0;
}