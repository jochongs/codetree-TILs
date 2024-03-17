#include <iostream>
#include <deque>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    deque<int> d;

    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;

        if (command == "push_back") {
            int input_num = 0;
            cin >> input_num;
            d.push_back(input_num);
        }

        if (command == "push_front") {
            int input_num = 0;
            cin >> input_num;
            d.push_front(input_num);
        }

        if (command == "pop_front") {
            int front = d.front();
            cout << front << '\n';
            d.pop_front();
        }

        if (command == "pop_back") {
            int back = d.back();
            cout << back << '\n';
            d.pop_back();
        }

        if (command == "size") {
            cout << d.size() << '\n';
        }

        if (command == "empty") {
            if (d.empty()) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        }

        if (command == "front") {
            cout << d.front() << '\n';
        }

        if (command == "back") {
            cout << d.back() << '\n';
        }
    }

    return 0;
}