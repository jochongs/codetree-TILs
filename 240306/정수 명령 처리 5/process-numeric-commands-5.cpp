#include <bits/stdc++.h>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    vector<int> v1;

    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string command = "";
        cin >> command;

        if (command == "push_back") {
            int n = 0;
            cin >> n;
            v1.push_back(n);
            continue;
        }

        if (command == "pop_back") {
            v1.pop_back();
            continue;
        }

        if (command == "size") {
            cout << v1.size() << '\n';
            continue;
        }

        if (command == "get") {
            int index = 0;
            cin >> index;
            cout << v1[index - 1] << '\n';
            continue;
        }

        continue;
    }

    return 0;
}