#include <iostream>
#include <deque>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    deque<int> d;

    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        d.push_back(i + 1);
    }

    while (d.size() != 1) {
        d.pop_front();
        int front_num = d.front();
        d.pop_front();
        d.push_back(front_num);
    }

    cout << d.front();

    return 0;
}