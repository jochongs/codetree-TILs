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

    if (str.length() < num) {
        for (int i = str.length() - 1; i >= num; i--) {
            cout << str[i];    
        }
        return 0;
    }

    for (int i = str.length() - 1; i >= str.length() - num; i--) {
        cout << str[i];
    }

    return 0;
}