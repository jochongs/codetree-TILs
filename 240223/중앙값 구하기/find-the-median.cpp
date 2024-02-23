#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;

    cin >> a >> b >> c;

    if((b > a && a > c) || (b < a && a < c)) {
        cout << a;
    }

    if((a > b && b > c) || (a < b && b < c)) {
        cout << b;
    }

    if((a > c && c > b) || (a < c && c < b)) {
        cout << c;
    }

    return 0;
}