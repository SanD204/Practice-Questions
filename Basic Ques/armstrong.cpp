#include <iostream>
#include <math.h>
using namespace std;

int armstrong(int x){
    int lastDigit = 0;
    int lastDigit1 = 0;
    int newNum = 0;
    int count = 0;
    int num = x;
    int n = x;
    while(x>0){
        lastDigit = x%10;
        x = x/10;
        count += 1;
    }

    while(num>0){
        lastDigit1 = num%10;
        num = num/10;
        newNum = pow(lastDigit1,count) + newNum;
    }
    // cout<< newNum;

    if(n == newNum){
        cout<< "true";
    }
    else{
        cout<< "false";
    }
}

int main(){
    cout<< armstrong(8208);
   
}