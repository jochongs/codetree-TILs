#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[10];

    int cnt = 10;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];

        if (arr[i] == 0) {
            cnt = i;
            break;
        }
    }

    for (int i = cnt - 1; i >= 0; i--) {
        cout << arr[i] << ' ';
    }

    return 0;
}