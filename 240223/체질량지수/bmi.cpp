#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cm, kg;

    cin >> cm >> kg;

    double m = double(cm) / 100;

    int bmi = kg / (m * m);

    cout << bmi << '\n';

    if(bmi >= 25) {
        cout << "Obesity";
    }
    
    return 0;
}