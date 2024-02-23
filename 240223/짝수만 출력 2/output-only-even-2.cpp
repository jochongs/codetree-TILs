#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    cin >> b >> a;

    if (b % 2 != 0) {
        b -= 1;
    }

    for(int i = b; i >= a; i -= 2) {
        cout << i << ' ';
    }

    return 0;
}