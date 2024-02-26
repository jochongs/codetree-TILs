#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    cin >> a >> b;

    int multipleNumber = 2;
    while (true) {
        for (int i = b; i >= a; i--) {
            cout << i << " * " << multipleNumber << " = " << multipleNumber * i;

            if (i != a) {
                cout << " / ";
            }
        }
        cout << '\n';

        multipleNumber += 2;
        if (multipleNumber == 10) {
            break;
        }
    }

    return 0;
}