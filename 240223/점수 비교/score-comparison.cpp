#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int aMath, bMath;
    int aEng, bEng;

    cin >> aMath >> bMath;
    cin >> aEng >> bEng;

    cout << (aMath > bMath && aEng > bEng);

    return 0;
}