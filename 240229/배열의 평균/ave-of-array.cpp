#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[2][4];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }   
    }

    cout << fixed;
    cout.precision(1);

    // 가로의 평균
    for (int i = 0; i < 2; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }   

        cout << sum / 4.0 << ' ';
    }
    cout << '\n';

    // 세로의 평균
    for (int j = 0; j < 4; j++) {
        int sum = 0;
        for (int i = 0; i < 2; i++) {
            sum += arr[i][j];
        }

        cout << sum / 2.0 << ' ';
    }
    cout << '\n';

    // 전체 평균
    int sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }   
    }
    cout << sum / 8.0;
    
    return 0;
}