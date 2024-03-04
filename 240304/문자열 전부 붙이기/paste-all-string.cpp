#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    string totalStr = "";
    for (int i = 0; i < n; i++) {
        string inputStr = "";
        cin >> inputStr;

        totalStr += inputStr;
    }

    cout << totalStr;

    return 0;
}