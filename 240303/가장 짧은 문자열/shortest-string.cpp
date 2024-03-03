#include <iostream>
using namespace std;

string max(string str1, string str2, string str3) {
    if (str1.length() > str2.length() && str1.length() > str3.length()) {
        return str1;
    }

    if (str2.length() > str1.length() && str2.length() > str3.length()) {
        return str2;
    }

    return str3;
}

string min(string str1, string str2, string str3) {
    if (str1.length() < str2.length() && str1.length() < str3.length()) {
        return str1;
    }

    if (str2.length() < str1.length() && str2.length() < str3.length()) {
        return str2;
    }

    return str3;
}

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    cout << max(str1, str2, str3).length() - min(str1, str2, str3).length();

    return 0;
}