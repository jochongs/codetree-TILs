#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << '*';
        }
        cout << '\n' << '\n';
    }
    for(int i = 0; i < n; i++) {
        cout << '*';
    }
    cout << '\n' << '\n';
    for (int i = n - 1; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            cout << '*';
        }
        cout << '\n' << '\n';
    }

    return 0;
}