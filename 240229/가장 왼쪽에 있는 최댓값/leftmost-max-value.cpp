#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[1000] = {0, };

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxIndex = n;
    while (true) {
        int max = -1;

        int roofCnt = maxIndex;
        for (int i = 0; i < roofCnt; i++) {
            if (arr[i] > max) {
                max = arr[i];
                maxIndex = i;
            }
        }

        cout << maxIndex + 1 << ' ';

        if(maxIndex == 0) {
            break;
        }
    }
    
    return 0;
}