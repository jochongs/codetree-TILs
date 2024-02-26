#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;

        cin >> a >> b;

        int sum = 0;

        for (int j = a; j <= b; j++) {
            if (j % 2 != 0) continue;

            sum += j;
        }

        cout << sum << '\n';
    }

    return 0;
}