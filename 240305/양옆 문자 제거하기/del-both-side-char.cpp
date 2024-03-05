#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string inputStr = "";
    cin >> inputStr;

    inputStr.erase(1, 1);
    inputStr.erase(inputStr.length() - 2, 1);

    cout << inputStr;

    return 0;
}