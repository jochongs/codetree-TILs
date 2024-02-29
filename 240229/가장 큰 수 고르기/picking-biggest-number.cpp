#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[10] = {0, };

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int max = 0;

    for (int i = 0; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << max;

    return 0;
}