#include <iostream>
#include <stack>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    cin >> n;

    stack<int> s;

    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;

        if (command == "push") {
            int input_num = 0;
            cin >> input_num;

            s.push(input_num);
        }

        if (command == "size") {
            cout << s.size() << '\n';
        }

        if (command == "empty") {
            if (s.empty()) {
                cout << 1 << '\n';
            } else { 
                cout << 0 << '\n';
            }
        }

        if (command == "pop") {
            cout << s.pop() << '\n';
        }

        if (command == "top") {
            cout << s.top() << '\n';
        }
    }

    return 0;
}