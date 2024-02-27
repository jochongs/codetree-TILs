#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int totalPassNumber = 0;
    for (int i = 0; i < n; i++) {
        int scoreArray[4];

        for (int j = 0; j < 4; j++) {
            cin >> scoreArray[j];
        }

        int totalSum = 0;
        for (int j = 0; j < 4; j++) {
            totalSum += scoreArray[j];
        }   

        if (totalSum / 4.0 < 60) {
            cout << "fail" << '\n';
            continue;
        }

        totalPassNumber++;
        cout << "pass" << '\n';
    }
    cout << totalPassNumber;

    return 0;
}