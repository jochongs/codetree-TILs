#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[10];

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int evenSum = 0;
    for (int i = 1; i < 10; i += 2) {
        evenSum += arr[i];
    }

    int sum = 0;
    int cnt = 0;
    for (int i = 2; i < 10; i += 3) {
        sum += arr[i];
        cnt ++;
    }

    cout << fixed;
    cout.precision(1);
    cout << evenSum << ' ' << sum / double(cnt);

    return 0;
}