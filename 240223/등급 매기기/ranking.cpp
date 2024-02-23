#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int score;

    cin >> score;

    if(score >= 90) {
        cout << "A";
        return 0;
    }
    if(score >= 80) {
        cout << "B";
        return 0;
    }
    if(score >= 70) {
        cout << "C";
        return 0;
    }
    if(score >= 60) {
        cout << "D";
        return 0;
    }

    cout << "F";
    return 0;
}