#include<iostream>
    using namespace std;
    
    void rotate(int arr[], int n,int k){
        k = k % n; // Ensure k is within bounds
        int temp[k];
        
        // Store the last k elements in temp
        for(int i = 0; i < k; i++){
            temp[i] = arr[n - k + i];
        }
        
        // Shift the remaining elements to the right
        for(int j = n - k - 1; j >= 0; j--){
            arr[j + k] = arr[j];
        }
        
        // Place the temp elements back at the start
        for(int i = 0; i < k; i++){
            arr[i] = temp[i];
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