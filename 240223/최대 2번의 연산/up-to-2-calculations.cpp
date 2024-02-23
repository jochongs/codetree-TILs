#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a;

    cin >> a;

    if(a % 2 == 0) {
        a /= 2;
    } 
    
    if(a % 2 != 0){ 
        a += 1;
        a /= 2;
    }

    cout << a;

    return 0;
}