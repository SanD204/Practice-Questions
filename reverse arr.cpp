#include <iostream>
using namespace std;

void revArr(int i, int arr[], int n) {
    if (i >= n / 2) {
        return;
    }

    swap(arr[i], arr[n - i - 1]);
    revArr(i + 1, arr, n);
}

int main() {
    int arr[] = {3, 5, 7, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    revArr(0, arr, n);

    // Print reversed array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
