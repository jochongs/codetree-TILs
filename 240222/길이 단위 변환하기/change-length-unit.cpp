#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    float ft = 30.48;
    float mi = 160934;

    float ft1 = 9.2;
    float mi1 = 1.3;

    cout.precision(1);
    cout << fixed;

    cout << ft1 << "ft = " << ft1 * ft << "cm" << endl;
    cout << mi1 << "mi = " << mi1 * mi << "cm" << endl; 

    return 0;
}