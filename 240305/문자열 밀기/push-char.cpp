#include <bits/stdc++.h>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string inputStr = "";
    cin >> inputStr;

    int len = inputStr.length();
    inputStr = inputStr.substr(1, len - 1) + inputStr.substr(0, 1);

    cout << inputStr;

    return 0;
}