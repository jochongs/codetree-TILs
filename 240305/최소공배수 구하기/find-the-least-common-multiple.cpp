#include <bits/stdc++.h>
using namespace std;

int* divisor(int n, int& size) {
    int arr[100] = {0, };

    int index = 0;
    for (int i = 1; i < n; i++) {
        if (n % i != n) continue;

        arr[index] = i;
        index++;
    }

    size = index;
    return arr;
}


int gcf(int n, int m) {

    return 1;
    
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;   
    cin >> n >> m;

    return 0;
}