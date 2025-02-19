#include<iostream>
using namespace std;

void reverse(int arr[],int n){

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6] = {5,6,34,6,56,89};
    reverse(arr, 6);
    return 0;
}