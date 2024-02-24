#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    int cnt = 0;
    while (true) {
        if (n % 2 == 0) {
            n *= 3;
            n += 1;
            continue;
        }

        n *= 2;
        n += 2;

        cnt++;

        cout << n << ' ';

        if(n >= 1000) {
            break;
        }
    }
    cout << '\n';
    cout << cnt;

    return 0;
}