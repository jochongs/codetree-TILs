#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string inputStr;
    cin >> inputStr;

    string evenStr;
    for (int i = 0; i < inputStr.length(); i++) {
        if(i % 2 == 1) {
            evenStr += inputStr[i];
        }
    }

    for (int i = evenStr.length() - 1; i >= 0; i--) {
        cout << evenStr[i];
    }

    return 0;
}