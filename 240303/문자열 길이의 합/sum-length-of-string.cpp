#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    string strArr[10] = {};
    for (int i = 0; i < n; i++) {
        cin >> strArr[i];
    }

    // 모든 문자열 길이의 합
    int length = 0;
    for (int i = 0; i < n; i++) {
        string str = strArr[i];

        length += str.length();
    }

    // a 횟수
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        string str = strArr[i];

        if (str[0] == 'a') cnt++;
    }
     
    cout << length << ' ' << cnt;

    return 0;
}