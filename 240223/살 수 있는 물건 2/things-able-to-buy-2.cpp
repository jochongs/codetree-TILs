#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int money;
    cin >> money;

    if(money >= 3000) {
        cout << "book";
        return 0;
    }

    if(money >= 1000) {
        cout << "mask";
        return 0;
    }

    if(money >= 500) {
        cout << "500";
        return 0;
    }

    cout << "no";
    return 0;
}