#include <iostream>
using namespace std;

int reverse(int arr[], int n){
    int rev[5] = {0};
    for(int i=0;i<n;i++){
        rev[i] = arr [n-1-i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<rev[i];
    }
    return 0;
}
int main() {
    int arr[5] = {5,3,4,6,7};

    reverse(arr,5);

    
    return 0;
}