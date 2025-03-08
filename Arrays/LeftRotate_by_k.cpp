#include<iostream>
using namespace std;

void rotate(int arr[], int n,int k){
    k = k % n; // Handling cases where k > n
    int temp[k];

    int i =0;

    // Step 1: Store first k elements in temp
    for(int i=0;i<k;i++){
        temp[i] = arr[i];
    }


    // Step 2: Shift remaining elements left
    for(int j=k;j<n;j++){
        arr[j-k] = arr[j];
    }

    // Step 3: Copy temp elements to the end
    for(int m=(n-k);m<n;m++){
        arr[m]=temp[i];
        i++;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    rotate(arr,n,k);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

}