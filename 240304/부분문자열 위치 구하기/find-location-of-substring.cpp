#include <iostream>
#include <string>
using namespace std;

int findIndex(string str, string findStr) {
    if (str.find(findStr) == string::npos) return -1;

    return str.find(findStr);
}

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string inputStr = "";
    string findStr = "";

    cin >> inputStr >> findStr;

    cout << findIndex(inputStr, findStr);
    
    return 0;
}