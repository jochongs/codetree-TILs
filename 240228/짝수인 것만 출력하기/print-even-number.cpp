#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int evenArr[100];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) continue;

        evenArr[cnt] = arr[i];
        cnt++;
    }

    for (int i = 0; i < cnt; i++) {
        cout << evenArr[i] << ' ';
    }

    return 0;
}