#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int temperature;

    cin >> temperature;

    if(temperature < 0) {
        cout << "ice";
        return 0;
    }

    cout << "water";

    return 0;
}