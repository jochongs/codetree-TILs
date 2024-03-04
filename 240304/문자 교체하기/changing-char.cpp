#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string firstStr = "", secondStr = "";
    cin >> firstStr >> secondStr;

    secondStr[0] = firstStr[0];    
    secondStr[1] = firstStr[1];
    
    cout << secondStr;

    return 0;
}