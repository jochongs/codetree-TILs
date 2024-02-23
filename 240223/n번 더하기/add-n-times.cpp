#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, n;

    cin >> a >> n;

    for (int i = 0; i < n; i++) {
        a += n;
        cout << a << '\n';
    }

    return 0;
}