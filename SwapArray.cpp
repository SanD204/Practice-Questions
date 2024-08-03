#include<iostream>
using namespace std;

void swapit(int arr[], int size){

    for(int i =0;i<size;i++){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
    }
}

void printit(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<< arr[i] <<" ";
    }cout<<endl;
}

int main(){

    int try1[6] = {3,7,8,2,5,1};
    swapit(try1 , 6);
    printit(try1 , 6);

    return 0;
}