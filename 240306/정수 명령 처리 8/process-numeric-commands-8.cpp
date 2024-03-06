#include <iostream>
#include <list>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    list<int> s;

    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string command = "";
        cin >> command;

        if (command == "push_back") {
            int n;
            cin >> n;
            s.push_back(n);
            continue;
        }

        if (command == "push_front") {
            int n;
            cin >> n;
            s.push_front(n);
            continue;
        }

        if (command == "pop_front") {
            cout << s.front() << '\n';
            s.pop_front();
            continue;
        }

        if (command == "pop_back") {
            cout << s.back() << '\n';
            s.pop_back();
            continue;
        }

        if (command == "size") {
            cout << s.size() << '\n';
            continue;
        }

        if (command == "empty") {
            if (s.empty()) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
            continue;
        }

        if (command == "front") {
            cout << s.front() << '\n';
            continue;
        }

        if (command == "back") {
            cout << s.back() << '\n';
            continue;
        }
    }
    
    return 0;
}