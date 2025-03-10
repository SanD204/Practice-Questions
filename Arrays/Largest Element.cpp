#include <iostream>
#include <vector>
using namespace std;

int largest(vector<int>& arr) {
    int max = arr[0]; 
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Largest element: " << largest(arr) << endl;
    return 0;
}
