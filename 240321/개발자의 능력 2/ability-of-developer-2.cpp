#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int vector_sum(vector<int> v) {
    return v[0] + v[1];
}

int max_sum(vector<int> v1, vector<int> v2, vector<int> v3) {
    int num1 = vector_sum(v1);
    int num2 = vector_sum(v2);
    int num3 = vector_sum(v3);

    return max(num1, max(num2, num3));
}

int min_sum(vector<int> v1, vector<int> v2, vector<int> v3) {
    int num1 = vector_sum(v1);
    int num2 = vector_sum(v2);
    int num3 = vector_sum(v3);

    return min(num1, min(num2, num3));
}

void display_vector (vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }
    cout << '\n';
}

int main() {
    vector<int> v;
    vector< vector< vector<int> > > main_vector;

    for (int i = 0; i < 6; i++) {
        int input_num = 0;
        cin >> input_num;

        v.push_back(input_num);
    }

    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 6; j++) {
            vector<int> element_4_vector = v;

            // 2개 추출
            vector<int> temp_v;
            temp_v.push_back(v[i]);
            temp_v.push_back(v[j]);
            
            // 추출한 요소 삭제
            element_4_vector.erase(element_4_vector.begin() + i);
            element_4_vector.erase(element_4_vector.begin() + j - 1);

            for (int k = 0; k < 4; k++) {
                for (int h = k + 1; h < 4; h++) {
                    vector<int> element_2_v = element_4_vector;
                    vector<int> temp_2_v;

                    // 2개 추출
                    temp_2_v.push_back(element_4_vector[k]);
                    temp_2_v.push_back(element_4_vector[h]);

                    // 추출한 요소 삭제
                    element_2_v.erase(element_2_v.begin() + h);
                    element_2_v.erase(element_2_v.begin() + k);

                    // 추출한 요소 삽입
                    vector< vector<int> > result_v;
                    result_v.push_back(temp_v);
                    result_v.push_back(temp_2_v);
                    result_v.push_back(element_2_v);
                    main_vector.push_back(result_v);
                }
            }
        }
    }

    int minimum = 100000000;
    for (int i = 0; i < main_vector.size(); i++) {
        vector< vector<int> > v = main_vector[i];

        int min_value = min_sum(v[0], v[1], v[2]);
        int max_value = max_sum(v[0], v[1], v[2]);

        if (max_value - min_value < minimum) {
            minimum = max_value - min_value;
        }
    }

    cout << minimum << '\n';

    return 0;
}