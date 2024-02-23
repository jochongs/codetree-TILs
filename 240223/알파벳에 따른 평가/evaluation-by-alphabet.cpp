#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char uppercaseAlphabet;

    cin >> uppercaseAlphabet;

    if(uppercaseAlphabet == 'S') {
        cout << "Superior";
        return 0;
    }

    if(uppercaseAlphabet == 'A') {
        cout << "Excellent";
        return 0;
    }

    if(uppercaseAlphabet == 'B') {
        cout << "Good";
        return 0;
    }

    if(uppercaseAlphabet == 'C') {
        cout << "Usually";
        return 0;
    }

    if(uppercaseAlphabet == 'D') {
        cout << "Effort";
        return 0;
    }

    cout << "Failure";
    return 0;
}