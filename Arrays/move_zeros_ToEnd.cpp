#include <iostream>
#include <vector>
using namespace std;

void moveZeros(vector<int>& arr) {
    int j = 0;  // j points to the next position for a non-zero element
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);  // Swap non-zero element to its correct position
            j++;
        }
    }
}


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    moveZeros(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
