#include <bits/stdc++.h>
using namespace std;

int gcl(int n, int m) {
    int A = max(n, m);
    int B = min(n, m);

    while (A % B != 0) {
        int R = A % B;
        A = B;
        B = R;
    }

    return B;
}

int gcf(int n, int m) {
    int gclNum = gcl(n, m);

    return (n / gclNum) * (m / gclNum) * gclNum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;   
    cin >> n >> m;

    cout << gcf(n, m);

    return 0;
}