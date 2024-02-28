#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[100];

    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int inputNumber = 0;
        cin >> inputNumber;
    
        arr[i] = inputNumber * inputNumber;
    } 

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    } 

    return 0;
}