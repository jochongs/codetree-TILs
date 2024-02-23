#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a;

    cin >> a;

    if(a % 3 == 0 || a % 5 == 0) {
        cout << 1;
        return 0;
    }

    cout << 0;
    return 0;
}