#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    cin >> a >> b;

    cout << fixed;
    cout.precision(2);

    cout << double(a + b) / double(a - b) << "\n";

    return 0;
}