#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, d, e;

    cin >> a >> b >> c >> d >> e;

    cout << (a > b) << '\n';
    cout << (a <= a) << '\n';
    cout << (a > d) << '\n';
    cout << (a > e) << '\n';

    return 0;
}