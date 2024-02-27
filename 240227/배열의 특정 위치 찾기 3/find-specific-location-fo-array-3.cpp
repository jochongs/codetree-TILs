#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[100];

    int cnt = 0;
    for (int i = 0; i < 100; i++) {
        cin >> arr[i];
        
        if (arr[i] == 0) {
            cnt = i;
            break;
        }
    }
    cout << arr[cnt - 1] + arr[cnt - 2] + arr[cnt - 3];

    return 0;
}