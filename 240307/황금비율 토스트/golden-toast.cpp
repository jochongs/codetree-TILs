#include <iostream>
#include <list>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0, m = 0;
    cin >> n >> m;

    string cipher = "";
    cin >> cipher;

    list<char> cipherList;
    for (int i = 0; i < n; i++) {
        cipherList.push_back(cipher[i]);
    }

    list<char>::iterator it = cipherList.end();

    for (int i = 0; i < m; i++) {
        char command = ' ';
        cin >> command;

        if (command == 'L'){
            if (it == cipherList.begin()) {
                continue;
            }
            it--;
        }

        if (command == 'R') {
            if (it == cipherList.end()) {
                continue;
            }
            it++;
        }

        if (command == 'P') {
            char inputChar;
            cin >> inputChar;
            cipherList.insert(it, inputChar);
        }

        if (command == 'D') {
            if (it == cipherList.end()) {
                continue;
            }
            cipherList.erase(it);
        }
    }

    for (it = cipherList.begin(); it != cipherList.end(); it++) {
        cout << *it;
    }

    return 0;
}