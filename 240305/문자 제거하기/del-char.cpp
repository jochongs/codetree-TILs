#include <bits/stdc++.h>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string inputStr = "";
    cin >> inputStr;

    while (true) {
        int num = 0;
        cin >> num;

        if (num >= inputStr.length() - 1) {
            inputStr.erase(inputStr.length() - 1, 1);
        } else { 
            inputStr.erase(num, 1);
        }

        cout << inputStr << '\n';

        if (inputStr.length() == 1) {
            break;   
        }
    }

    return 0;
}