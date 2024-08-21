#include <iostream>
using namespace std;

int main(){
    int x = 98756;
    int y = 0;
    while(x!= 0){
        int lastdigit = x%10;
        int newresult = y*10 + lastdigit;
        y = newresult;
        x = x/10;
    }
    cout<< y ;
}