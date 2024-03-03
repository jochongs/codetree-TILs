#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str1, str2;
    cin >> str1 >> str2;

    if (str1.length() == str2.length()) {
        cout << "same";
        return 0;
    }

    if (str1.length() > str2.length()) {
        cout << str1 << ' ' << str1.length();
        return 0;
    }

    cout << str2 << ' ' << str2.length();

    return 0;
}