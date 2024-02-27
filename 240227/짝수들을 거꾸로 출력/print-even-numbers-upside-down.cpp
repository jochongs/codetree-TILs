#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int arr[100];

    int evenCnt = 0;
    for (int i = 0; i < n; i++) {
        int num = 0;

        cin >> num;

        if (num % 2 == 0) {
            arr[evenCnt] = num;
            evenCnt++;
        }
    }

    for (int i = evenCnt - 1; i >= 0; i--) {
        cout << arr[i] << ' ';
    }
    
    return 0;
}