#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char myStr[6] = {'L', 'E', 'B', 'R', 'O', 'S'};

    char inputChar;
    cin >> inputChar;

    int index = -1;
    for (int i = 0; i < 6; i++) {
        if (myStr[i] == inputChar) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "None";
        return 0;
    }

    cout << index;
    return 0;
}