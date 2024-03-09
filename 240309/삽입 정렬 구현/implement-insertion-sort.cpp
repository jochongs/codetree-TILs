#include <iostream>
using namespace std;

void insert_sort(int arr[], int size) {
    for (int i = 1; i < size; i ++) {
        int key = arr[i];

        int j = i - 1;
        while (j >= 0) {
            if (arr[j] < key) {
                break;
            }

            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key; 
    }
}

int main() {
    int arr[100] = {0, };

    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insert_sort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
}