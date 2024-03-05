#include <bits/stdc++.h>
using namespace std;

string check(char n1, char n2, char n3) {
    if(
        (n1 == n2 && n2 == n3) || // 1 1 1
        (n1 != n2 && n2 != n3 && n1 != n3) // 1 2 3
    ) {
        return "00";
    }
    
    string result = "";
    if (n1 == n2) { // 1 1 2
        result += n1;
        result += n3;
        return result;
    }

    if (n2 == n3) { // 2 1 1
        result += n2;
        result += n1;
        return result;
    }

    result += n1;
    result += n2;
    return result; // 1 2 1
}

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10][10] = {};

    vector<string> strArr{"189", "167", "167"};

    for (auto &str:strArr) {
        cin >> str;
    }

    // 가로
    for (auto &str:strArr) {
        string result = check(str[0], str[1], str[2]);
        if (result == "00") {
            continue;
        }

        int A = min(int(result[0] - 49), int(result[1] - 49));
        int B = max(int(result[1] - 49), int(result[1] - 49));
        arr[A][B] = 1;
    }

    // 세로
    for  (int i = 0; i < 3; i++) {
        string result = check(strArr[0][i], strArr[1][i], strArr[2][i]);
        if (result == "00") {
            continue;
        }

        int A = min(int(result[0] - 49), int(result[1] - 49));
        int B = max(int(result[1] - 49), int(result[1] - 49));
        arr[A][B] = 1;
    }

    // 대각선 1
    string result1 = check(strArr[0][0], strArr[1][1], strArr[2][2]);
    if (result1 != "00") {
        int A = min(int(result1[0] - 49), int(result1[1] - 49));
        int B = max(int(result1[1] - 49), int(result1[1] - 49));
        arr[A][B] = 1;
    }

    // 대각선 2
    string result2 = check(strArr[2][0], strArr[1][1], strArr[0][2]);
    if (result2 != "00") {
        int A = min(int(result2[0] - 49), int(result2[1] - 49));
        int B = max(int(result2[1] - 49), int(result2[1] - 49));
        arr[A][B] = 1;
    }

    int total = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            //cout << arr[i][j] << ' ';
            if (arr[i][j] == 0) continue; 
            total++;  
        }
        //cout << '\n';
    }
    
    cout << total;

    return 0;
}