#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double numberArray[8];

    for (int i = 0; i < 8;i ++) {
        cin >> numberArray[i];
    }

    double sum = 0;
    for (int i = 0; i < 8;i ++) {
        sum += numberArray[i];
    }

    cout << fixed;
    cout.precision(1);
    cout << sum / 8;

    return 0;
}