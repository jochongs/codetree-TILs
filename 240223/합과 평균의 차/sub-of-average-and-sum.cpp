#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;

    cin >> a >> b >> c;

    int sum = a + b + c;
    int avg = sum / 3

    cout << sum << '\n';
    cout << avg << '\n';
    cout << sum - avg << '\n'; 

    return 0;
}