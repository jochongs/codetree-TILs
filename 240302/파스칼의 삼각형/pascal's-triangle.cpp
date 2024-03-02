#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int arr[15][15] = {};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            if (i -1 < 0 || j - 1 < 0) {
                arr[i][j] = 1;   
                continue;
            }

            arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}