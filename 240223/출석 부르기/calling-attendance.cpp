#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int studentNum;

    cin >> studentNum;

    if(studentNum == 1) {
        cout << "John";
        return 0;
    }

    if(studentNum == 2) {
        cout << "Tom";
        return 0;
    }

    if(studentNum == 3) {
        cout << "Paul";
        return 0;
    }

    cout << "Vacancy";
    return 0;
}