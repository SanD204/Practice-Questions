#include <iostream>
using namespace std;

int revNum(int n){
    int ld = 0;
    int rn = 0;
    while(n>0){
        ld = n%10;
        n = n/10;
        rn = (rn*10) + ld;
    }
    return rn;
}

int main(){
    cout << revNum(967392);
}