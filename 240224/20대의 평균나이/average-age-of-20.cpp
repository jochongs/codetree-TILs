#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int totalSum = 0;
    int cnt = 0;
    while (true) {
        int age = 0;

        cin >> age;

        if (age < 20) {
            break;
        }

        totalSum += age;
        cnt++;
    }

    cout << fixed;
    cout.precision(2);
    cout << totalSum / double(cnt); 

    return 0;
}