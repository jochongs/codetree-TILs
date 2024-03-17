#include <iostream>
#include <stack>
using namespace std;

bool check_bracket(string input_str) {
    stack<char> s;

    for (int i = 0; i < input_str.size(); i++) {
        if (input_str[i] == '(') {
            s.push('(');
        } else {
            if (s.empty()) {
                return false;
            }
        }
    }

    return s.empty() == true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string input_str;
    cin >> input_str;

    bool result = check_bracket(input_str);
    if (result) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }

    return 0;
}