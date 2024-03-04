#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string inputStr = "";
    int n = 0;
    cin >> inputStr >> n;
    
    for (int i = 0; i < n; i++) {
        int type = 0;
        cin >> type;

        if (type == 1) {
            int a, b;
            cin >> a >> b;

            char temp = inputStr[a - 1];
            inputStr[a - 1] = inputStr[b - 1];
            inputStr[b - 1] = temp;

            cout << inputStr << '\n';

            continue;
        }

        if (type == 2) {
            char s, q;
            cin >> s >> q;

            for (int i = 0; i < inputStr.length(); i++) {
                if (inputStr[i] == s) {
                    inputStr[i] = q;
                }
            }

            cout << inputStr << '\n';

            continue;
        }
    }

    return 0;
}