#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double ft = 30.48;
    double inputFt;

    cin >> inputFt;

    cout << fixed;
    cout.precision(1);
    cout << ft * inputFt;

    return 0;
}