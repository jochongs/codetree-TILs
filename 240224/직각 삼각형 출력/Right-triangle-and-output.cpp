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
        for (int j = 0; j < i * 2 + 1; j ++) {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}