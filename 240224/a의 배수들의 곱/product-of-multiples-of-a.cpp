#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    cin >> a >> b;

    int totalMultiple = 1;
    for (int i = i; i <= b; i++) {
        if (i % a == 0) {
            totalMultiple *= i;
        }
    }

    return 0;
}