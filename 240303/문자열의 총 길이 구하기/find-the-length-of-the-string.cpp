#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string strArr[20] = {};

    for (int i = 0; i < 20; i++) {
        cin >> strArr[i];
    }

    int sum = 0;
    for (int i = 0; i < 20; i++) {
        sum += strArr[i].length();
    }

    cout << sum;

    return 0;
}