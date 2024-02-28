#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[10] = {};

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < 10; i ++) {
        if((i + 1) % 2 == 0) {
            oddSum += arr[i];
            continue;
        }

        evenSum += arr[i];
    }

    int result = evenSum > oddSum ? evenSum - oddSum : oddSum - evenSum;
    cout << result;

    return 0;
}