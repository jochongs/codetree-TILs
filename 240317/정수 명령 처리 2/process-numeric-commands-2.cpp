#include <iostream>
#include <queue>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    queue<int> q;

    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;

        if (command == "push") {
            int input_num = 0;
            cin >> input_num;
            q.push(input_num);
        }

        if (command == "pop") {
            int front_num = q.front();
            q.pop();
            cout << front_num << '\n';
        }

        if (command == "size") {
            cout << q.size() << '\n';
        }
        
        if (command == "empty") {
            if (q.empty()) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        }

        if (command == "front") {
            cout << q.front() << '\n';
        }
        
    }

    return 0;
}