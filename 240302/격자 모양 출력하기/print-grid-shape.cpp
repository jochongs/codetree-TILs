#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int arr[10][10] = {};

    for (int i = 0; i < m; i++) {
        int r, c;
        cin >> r >> c;

        arr[r - 1][c - 1] = r * c;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << ' ';
        }   
        cout << '\n';
    }

    return 0;
}