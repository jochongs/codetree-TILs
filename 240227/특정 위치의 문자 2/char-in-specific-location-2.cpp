#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char string[10];

    for (int i = 0; i < 10; i++) {
        cin >> string[i];
    }

    cout << string [2 - 1] << ' ' << string [5 - 1] << ' ' << string [8 - 1];

    return 0;
}