#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int firstNum = 0;
    int secondNum = 0;

    cin >> firstNum >> secondNum;

    int arr[11] = {firstNum, secondNum};

    for (int i = 0; i < 9; i++) {
        arr[i + 2] = (arr[i] + arr[i + 1]) % 10;
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}