#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string strArr[10] = {};

    for (int i = 0; i < 10; i++) {
        cin >> strArr[i];
    }

    for (int i = 0; i < 10; i++) {
        string str = strArr[i];

        cout << str << '\n';
    }

    return 0;
}