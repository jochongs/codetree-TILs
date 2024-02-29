#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int arr[1000] = {0, };

    for (int i = 0; i < n; i++) {
        int num = 0;
        cin >> num;

        if (arr[num - 1] != 0) {
            arr[num - 1] = -2;
            continue;
        }

        arr[num - 1] = num;
    }

    int max = -1;
    for (int i = 0; i < 1000; i++) {
        if (arr[i] <= 0) {
            continue;
        }

        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << max;

    return 0;
}