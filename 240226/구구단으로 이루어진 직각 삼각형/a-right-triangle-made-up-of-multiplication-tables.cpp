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
        for (int j = 0; j < n - i; j++) {
            cout << i + 1 << " * " << j + 1 << " = " << (i + 1) * (j + 1);

            if(j == n - i - 1) {
                continue;
            }

            cout << " / ";
        }
        cout << '\n';
    }

    return 0;
}