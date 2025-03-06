#include <iostream>
#include <vector>
using namespace std;

void sec_large(int arr[],int n){
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] != arr[i + 1]) {  // Find the first unique smaller element
            cout << endl << "Second Largest element: " << arr[i] << endl;
            break;
        }
    }

    // for(int i=n-2;i>=0;i--){
    //     if(arr[i]==arr[i+1]){
    //         i--;
    //     }
    //     else{
    //         cout << endl << "Second Largest element : ";
    //         cout << arr[i];
    //         break;
    //     }
    // }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sec_large(arr,n);
    cout << "Sorted Array : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}