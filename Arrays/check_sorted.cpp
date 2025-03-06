#include <iostream>
using namespace std;

void bubbleSort_new(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

bool check(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  // Fixed loop bounds
        if (arr[i] > arr[i + 1]) { 
            bubbleSort_new(arr, n);
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl; // Added newline after sorting
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    if (check(arr, n)) {
        cout << "True";
    }
    
    return 0;
}
