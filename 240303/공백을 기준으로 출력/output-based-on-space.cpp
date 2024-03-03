#include <iostream>
#include <string>
using namespace std;

string removeSpace(string inputStr) {
    string str = "";
    for (int i = 0; i < inputStr.length(); i++) {
        if (inputStr[i] != ' ') {
            str += inputStr[i];
        }
    }

    return str;
} 

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    cout << removeSpace(str1) << removeSpace(str2);   

    return 0;
}