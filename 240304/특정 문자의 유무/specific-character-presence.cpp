#include <iostream>
#include <string>
using namespace std;

bool findStr(string str, string findStr) {
    if (str.find(findStr) == string::npos) {
        return false;
    }

    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string inputStr = "";
    cin >> inputStr;

    if (findStr(inputStr, "ee")) {
        cout << "Yes" << ' ';
    } else {
        cout << "No" << ' ';
    }

    if (findStr(inputStr, "ab")) {
        cout << "Yes" << ' ';
    } else { 
        cout << "No" << ' ';
    }

    return 0;
}