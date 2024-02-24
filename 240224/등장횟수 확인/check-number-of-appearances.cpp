#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        int n;

        cin >> n;

        if (n % 2 == 0) {
            cnt++;
            continue;
        }
    }

    cout << cnt;

    return 0;
}