#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        int number;

        cin >> number;

        if (number % 2 == 1 && number % 3 ==0) {
            cout << number << '\n';
        }
    }

    return 0;
}