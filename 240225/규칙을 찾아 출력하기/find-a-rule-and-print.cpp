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
        cout << '*' << ' ';
    }
    cout << '\n';

    for (int i = 0; i < n - 2; i++) {
        cout << '*' << ' ';

        // 별
        for(int j = 0; j < i; j++) {
            cout << '*' << ' ';
        }

        //공백
        for(int j = 0; j < (n - 2) - i; j++) {
            cout << ' ' << ' ';
        }

        cout << '*' << ' ' << '\n';
    }

    for (int i = 0; i < n; i++) {
        cout << '*' << ' ';
    }
    cout << '\n';

    return 0;
}