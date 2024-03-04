#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string inputStr;
    cin >> inputStr;

    string result = "";
    char previous = ' ';
    int cnt = 0;
    for (int i = 0; i < inputStr.length(); i++) {
        if (inputStr[i] == previous) {
            cnt++;
            continue;
        }
        
        if (i != 0) {
            result += previous + to_string(cnt + 1);
        }
        previous = inputStr[i];
        cnt = 0;
    }
    result += previous + to_string(cnt + 1);
    cout << result.length() << '\n';
    cout << result;

    return 0;
}