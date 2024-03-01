#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 4, m = 6;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int coutNumber = 0;
            if (j % 2 == 0) {
                // 홀수열 1 3 5
                coutNumber = (j * n) + i;
            } else {
                // 짝수열 2 4 8
                coutNumber = ((j + 1) * n) - i - 1;
            }

            cout << coutNumber << ' ';
        }    
        cout << '\n';
    }

    return 0;
}