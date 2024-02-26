#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int alphabetASCII = 65;
    for (int i = 0; i < n; i++) {
        // 공백
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }

        // 알파벳
        for (int j = 0; j < n - i; j++) {
            char alphabet = alphabetASCII;
            cout << alphabet << ' ';

            if (alphabet == 'Z') {
                alphabetASCII = 65;
                continue;    
            }
            
            alphabetASCII++;
        }

        cout << '\n';
    }

    return 0;
}