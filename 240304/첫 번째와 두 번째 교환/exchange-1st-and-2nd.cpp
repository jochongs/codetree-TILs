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

    char firstAlphabet = inputStr[0]; // c
    char secondAlphabet = inputStr[1]; // o
    for (int i = 0; i < inputStr.length(); i++) {
        if (inputStr[i] == firstAlphabet) {
            inputStr[i] = secondAlphabet;
            continue;
        }

        if (inputStr[i] == secondAlphabet) {
            inputStr[i] = firstAlphabet;
        }
    } 

    cout << inputStr;

    return 0;
}