#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int inputNumberArray[10] = {};

    for (int i = 0; i < 10; i++) {
        cin >> inputNumberArray[i];
    }

    int totalSum = 0;
    int cnt = 0;
    
    for (int i = 0; i < 10; i++) {
        if (inputNumberArray[i] >= 250) {
            break;
        }

        cnt++;
        totalSum += inputNumberArray[i];
    }

    if (cnt == 0) {
        for (int i = 0; i < 9; i++) {
            if (inputNumberArray[i] >= 250) {
                break;
            }

            cnt++;
            totalSum += inputNumberArray[i];
        }   
    }

    cout << fixed;
    cout.precision(1);
    cout << totalSum << ' ' << double(totalSum) / cnt;

    return 0;
}