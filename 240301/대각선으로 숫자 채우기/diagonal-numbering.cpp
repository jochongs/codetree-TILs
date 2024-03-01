#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 1, m = 6;
    cin >> n >> m;

    int arr[100][100] = {};

    int row = 0;
    int column = 0;
    int number = 1;
    for (int i = 0; i < n + m - 1; i++) {
        int selectedRow = row;
        int selectedColumn = column;
        while (true) {
            arr[selectedRow][selectedColumn] = number;
            number++;

            if (selectedColumn - 1 < 0 || selectedRow == n - 1) {
                break;
            }

            selectedRow++;
            selectedColumn--;
        }

        
        if (i >= n - 1 && n != 1 && m != 1) {
            row++;
        } else {
            column++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << ' ';
        }   
        cout << '\n';
    }

    return 0;
}