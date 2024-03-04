#include <iostream>
using namespace std;

int checkStrCnt(string str, string findStr) {
    int cnt = 0;
    for (int i = 0; i < str.length() - 1; i++) {
        if (str.substr(i, findStr.length()) != findStr) continue;

        cnt++;
    }

    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string inputStr = "";
    cin >> inputStr;

    cout << checkStrCnt(inputStr, "ee") << ' ' << checkStrCnt(inputStr, "eb");

    return 0;
}