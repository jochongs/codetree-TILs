#include <iostream>
using namespace std;

void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool change_state = false;
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                change_state = true;
            }
        }

        if (!change_state) {
            break;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    cin >> n;

    int arr[100] = {0, };

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubble_sort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}