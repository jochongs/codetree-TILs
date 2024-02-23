#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double a; 

    cin >> a;

    if(a >= 1.0) {
        cout << "High";
        return 0;
    }

    if(a >= 0.5) {
        cout << "Middle";
        return 0;
    }

    cout << "Low";
    return 0;
}