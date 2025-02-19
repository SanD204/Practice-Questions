#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=n-1; i>=0; i--){          //to eliminate element from last to come in loop.
        for(int j=0; j<=i-1; j++){      //j<=i+1 to not consider last element, as no adjacent to it giving rntime error!
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);    
            }
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
    bubbleSort(arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}