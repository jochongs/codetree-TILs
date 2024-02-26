#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    double scoreSum = 0;
    double scoreArray[5];
    for (int i = 0; i < n; i++) {
        cin >> scoreArray[i];

        scoreSum += scoreArray[i];
    }

    cout << fixed;
    cout.precision(1);

    cout << scoreSum / n << '\n';

    if (scoreSum / n >= 4.0) {
        cout << "Perfect";
        return 0;
    }

    if (scoreSum / n >= 3.0) {
        cout << "Good";
        return 0;
    }

    cout << "Poor";
    return 0;
}