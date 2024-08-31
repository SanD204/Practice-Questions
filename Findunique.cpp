#include<iostream>
using namespace std;
int findUnique(int *arr, int size){

    int ans = 0;

    for(int i = 0;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}
//int main giving in code studio

int main(){
   /*
    int size , arr;
    cin>>size;

    for(int i=0;i<size;i++){
        cin>>arr[size];
    }*/

   int arr[6] = {5,6,1,6,5};
   int ans =  findUnique(arr,5);
   cout<<ans;
    return 0;
   

}