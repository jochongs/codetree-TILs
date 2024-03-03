#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char inputAlphabet = ' ';
    cin >> inputAlphabet;

    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};

    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        string str = arr[i];

        if (str[2] == inputAlphabet || str[3] == inputAlphabet) {
            cout << str << '\n';
            cnt ++;
        }
    }

    cout << cnt;

    return 0;
}