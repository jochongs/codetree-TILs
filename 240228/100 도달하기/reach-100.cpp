#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int arr[100] = {1, n};
    int cnt = 0;
    for (int i = 0; i < 100; i++) {
        arr[i + 2] = arr[i] + arr[i + 1];
        cnt ++;

        if (arr[i + 2] > 100) break;
    }

    for (int i = 0; i < cnt + 2; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}