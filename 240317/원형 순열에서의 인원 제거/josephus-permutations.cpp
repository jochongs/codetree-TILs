#include <iostream>
#include <queue>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    queue<int> q;

    int n = 0, k = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        q.push(i + 1);
    }

    while (q.size() != 0) {
        for (int i = 0; i < k - 1; i++) {
            int num = q.front();
            q.push(num);
            q.pop();
        }
        int killed_num = q.front();
        cout << killed_num << ' ';
        q.pop();
    }

    return 0;
}