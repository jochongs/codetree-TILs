#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int scoreArray[10];

    int cnt = 10;

    for (int i = 0; i < 10; i++) {
        cin >> scoreArray[i];

        if (scoreArray[i] == 0) {
            cnt = i;
            break;
        }
    }

    int sum = 0;
    for (int i = 0; i < cnt; i++) {
        sum += scoreArray[i];
    }

    cout << fixed;
    cout.precision(1);
    
    cout << sum << ' ' << sum / double(cnt);

    return 0;
}