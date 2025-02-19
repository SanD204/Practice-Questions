#include <iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0; i<=n-2; i++){         //not cosidering last element.
        int min = i;
        for(int j=i; j<=n-1; j++){     //j=i to skip 1st elements that are already sorted.
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        // swap(arr[i],arr[min]);

    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    selectionSort(arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}