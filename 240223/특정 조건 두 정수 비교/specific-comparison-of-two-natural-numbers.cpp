#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num1, num2;

    cin >> num1 >> num2;

    if(num1 < num2) {
        cout << 1 << '\n';
    } else {
        cout << 0 << '\n';
    }

    if(num1 == num2) {
        cout << 1 << '\n';
    } else {
        cout << 0 << '\n';
    }

    return 0;
}