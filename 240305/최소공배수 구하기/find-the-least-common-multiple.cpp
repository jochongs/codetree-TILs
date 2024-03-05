#include <bits/stdc++.h>
using namespace std;

int* divisor(int n, int& size) {
    int* arr = new int[100];

    int index = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i != 0) continue;

        arr[index] = i;
        index++;
    }

    size = index;
    return arr;
}

int gcl(int n, int m) {
    int nSize = 0;
    int mSize = 0;
    int* nDivisor = divisor(n, nSize);
    int* mDivisor = divisor(m, mSize);

    int gcl = 1;
    for (int i = 0; i < nSize; i++) {
        for (int j = 0; j < mSize; j++) {
            if (nDivisor[i] == mDivisor[j]) {
                gcl = nDivisor[i];
            }
        }
    }

    return gcl;
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