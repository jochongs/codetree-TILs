#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    
    cin >> n;
    
    if(n >= 80) {
        cout << "pass";
        return 0;
    }

    cout << 80 - n << " more score";

    return 0;
}