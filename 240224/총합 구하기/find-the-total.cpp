#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    cin >> a >> b;

    int totalSum = 0;
    for (int i = a; i <= b; i++ ) {
        if (i % 6 == 0 && i % 8 != 0) {
            totalSum += i;
        }
    }

    cout << totalSum;

    return 0;
}