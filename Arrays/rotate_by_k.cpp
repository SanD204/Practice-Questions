#include<iostream>
using namespace std;

void rotate(int arr[], int n,int k){
    int temp[k];
    int i =0;
    for(int i=0;i<=k;i++){
        temp[i] = arr[i];
    }
    for(int j=k;j<n;j++){
        arr[j-k] = arr[j];
    }
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