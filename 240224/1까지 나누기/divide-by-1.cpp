#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    int i = 1;
    while (true) {
        n /= i;

        if (n <= 1) {
            break;
        }

        i++;
    }
    cout << i;

    return 0;
}