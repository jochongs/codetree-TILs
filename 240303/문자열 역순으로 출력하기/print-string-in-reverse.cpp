#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string arr[4] = {};

    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    for (int i = 3; i >= 0; i--) {
        cout << arr[i] << '\n';
    }

    return 0;
}