#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    int num;

    cin >> str >> num;

    for (int i = str.length() - 1; i >= 0; i--) {
        if(str.length() - i > num) {
            break;
        }
        cout << str[i];
    }

    return 0;
}