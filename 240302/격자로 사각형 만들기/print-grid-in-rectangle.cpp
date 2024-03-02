#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[10][10] = {};

    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        arr[0][i] = 1;
        arr[i][0] = 1;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1] + arr[i - 1][j - 1];
        }   
    }

    // 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << ' ';
        }   
        cout << '\n';
    }

    return 0;
}