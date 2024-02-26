#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char arr[10];

    for (int i = 0; i < 10; i++) {
        char c;

        cin >> c;

        arr[i] = c;
    }

    for (int i = 10 - 1; i >= 0; i--) {
        cout << arr[i];
    }

    return 0;
}