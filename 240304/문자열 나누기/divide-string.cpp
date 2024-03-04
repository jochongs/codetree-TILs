#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;
    cin >> n;

    string strArr[10] = {};
    string totalStr = "";
    for (int i = 0; i < n; i++) {
        cin >> strArr[i];
        totalStr += strArr[i];
    }

    for (int i = 0; i < totalStr.length(); i++) {
        cout << totalStr[i];
        if (i % 5 == 4) {
            cout << '\n';
        }
    }

    return 0;
}