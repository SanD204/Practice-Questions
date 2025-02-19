#include <iostream>
using namespace std;
int count1(int n){
    int ld;
        int num = n;
        int count = 0;
        while(n>0){
            ld = n%10;
            if(ld > 0 && num%ld == 0){
                count = count+1;
            }
            n=n/10;
        }
        return count;
}

int main(){
    cout << count1(55) ;
}