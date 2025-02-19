#include <iostream>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i = 0; i<=n-1; i++){        //normal loop for all elements
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){  //compare all elements to its adjacent left and swap till sorted.
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    insertionSort(arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}