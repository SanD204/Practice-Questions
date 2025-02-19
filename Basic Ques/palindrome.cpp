#include <iostream>
using namespace std;
int pal(int n){
    int revNum = 0;
    int lastDigit = 0;
    int num = n;
    while(n>0){
        lastDigit = n%10;
        revNum = (revNum*10)+lastDigit;
        n = n/10;
    }

    if(num == revNum){
        cout<< "Palindrome";
    }
    else{
        cout<< "Not a Palindrome";
    }
}

int main(){
    cout << pal(1221) ;
}