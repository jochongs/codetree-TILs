#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; 
    cin >> n;

    int arr[10][10] = {};

    int direction = -1;
    int num = 1;
    for (int j = n - 1; j >= 0; j--) {
        if (direction == -1) { // 위로
            for (int i = n - 1; i >= 0; i--) {
                arr[i][j] = num;
                num++;
            }

            direction = 1;
            continue;
        }

        for (int i = 0; i < n; i++) {
            arr[i][j] = num;
            num++;
        }

        direction = -1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}