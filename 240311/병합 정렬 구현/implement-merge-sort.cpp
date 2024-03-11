#include <iostream>
using namespace std;

void merge(int arr[], int start_idx, int end_idx) {
    int mid = (start_idx + end_idx) / 2;
    
    int new_arr[100000] = {0, };

    int idx = 0;
    int i = start_idx;
    int j = mid + 1;

    while (i <= mid && j <= end_idx) {
        if (arr[i] < arr[j]) {
            new_arr[idx] = arr[i];
            i++;
        } else {
            new_arr[idx] = arr[j];
            j++;
        }
        idx++;
    }

    while (i <= mid) {
        new_arr[idx] = arr[i];
        i++;
        idx++;
    }

    while (j <= end_idx) {
        new_arr[idx] = arr[j];
        j++;
        idx++;
    }

    for (int i = 0; i < end_idx - start_idx + 1; i++) {
        arr[start_idx + i] = new_arr[i];
    }
}

void merge_sort(int arr[], int start_idx, int end_idx) {
    if (start_idx == end_idx) {
        return;
    }

    int mid = (start_idx + end_idx) / 2;
    
    merge_sort(arr, start_idx, mid);
    merge_sort(arr, mid + 1, end_idx);
    merge(arr, start_idx, end_idx);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100000];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    merge_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}