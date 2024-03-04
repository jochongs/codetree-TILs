#include <iostream>
using namespace std;

int findIndex(string str, string findStr) {
    if (str.find(findStr) != string::npos) {
        return str.find(findStr);
    }

    return -1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string inputStr = "";
    string findStr = "";

    cin >> inputStr >> findStr;

    if (findIndex(inputStr, findStr) == -1) {
        cout << "No";
        return 0;
    }

    cout << findIndex(inputStr, findStr);

    return 0;
}