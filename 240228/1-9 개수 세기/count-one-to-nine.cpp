#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cntArray[10] = {0, };

    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int inputNumber = 0;
        cin >> inputNumber;

        cntArray[inputNumber - 1] ++;
    }

    for (int i = 0; i < 9; i++) {
        cout << cntArray[i] << '\n';
    }

    return 0;
}