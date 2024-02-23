#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    
    cin >> a >> b;

    if(a > b) { 
        cout << a - b;

        return 0;
    }

    cout << b - a;

    return 0;
}