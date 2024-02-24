#include <iostream>
using namespace std;

bool cal(int number) {
    if (1920 % number == 0 || 2880 % number == 0) {
        return true;
    }

    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        bool state = cal(i);

        if (state) {
            cout << 1;
            return 0;
        }
    }

    cout << 0;
    return 0;
}