#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a;
    string b;

    cin >> a >> b;

    if (a + b == b + a) {
        cout << "true";
        return 0;
    }

    cout << "false";
    return 0;
}