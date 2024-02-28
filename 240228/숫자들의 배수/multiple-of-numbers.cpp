#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;
    cin >> n;

    int cnt = 0;
    int arr[90];
    int i = 0;
    while (true) {
        arr[i] = n * (i + 1);

        if (arr[i] % 5 == 0) {
            cnt++;
        };
        i++;

        if (cnt == 2) break;
    }

    for (int j = 0; j < i; j++) {
        cout << arr[j] << ' ';
    }

    return 0;
}