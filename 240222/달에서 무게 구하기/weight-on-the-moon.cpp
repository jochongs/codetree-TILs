#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 13;
    float b = 0.165;

    cout << fixed;
    cout << a << " * ";

    cout.precision(6);
    cout << b;

    cout << " = ";
    
    cout.precision(6);
    cout << a * b;

    return 0;
}