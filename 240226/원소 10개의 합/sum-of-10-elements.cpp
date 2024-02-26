#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[10];

    for (int i = 0; i < 10; i++) {
        int n = 0;
        cin >> n;

        arr[i] = n;
    }

    int totalSum = 0;
    for (int i = 0; i < 10; i++) {
        totalSum += arr[i];
    }
    cout << totalSum;

    return 0;
}