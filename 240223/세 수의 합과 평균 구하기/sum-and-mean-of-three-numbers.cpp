#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;

    cin >> a >> b >> c;

    cout << a + b + c << "\n";
    cout << (a + b + c) / 3;

    return 0;
}