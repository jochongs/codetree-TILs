#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int age1, age2;
    char gender1, gender2;

    cin >> age1 >> gender1;
    cin >> age2 >> gender2;

    if((age1 > 19 && gender1 == 'M') || (age2 > 19 && gender2 == 'M')) {
        cout << 1;
        return 0;
    }

    cout << 0;
    return 0;
}