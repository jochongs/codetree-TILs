#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int score;

    cin >> score;

    bool state = score == 100 ? true : false;

    if(state) {
        cout << "pass";
        return 0;
    }

    cout << "failure";

    return 0;
}