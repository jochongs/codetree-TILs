#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int number = 9;

    for (int i = 0; i < n; i++) {
        for (int i = 0; i < n; i++) {
            cout << number;

            if (number == 1) {
                number = 9;
                continue;
            }
            number--;
        }
        cout << '\n';
    }

    return 0;
}