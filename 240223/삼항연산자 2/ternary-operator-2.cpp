#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a;

    cin >> a;

    char output = a == 1 ? 't' : 'f';

    cout << output;

    return 0;
}