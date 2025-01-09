#include<iostream>
using namespace std;

void p1(int a, int b){
    for(int i=0;i<a;i++){
       
       for(int j=0;j<b;j++){
        cout<<"*";
       }
        cout << endl;
    }
}

void p2(int a, int b){
    for(int i=0;i<a;i++){
       
       for(int j=0;j<=i;j++){
        cout<<"* ";
       }
        cout << endl;
    }
}

int main(){
    int a = 3, b = 4;
    p1(a,b);
    p2(a,b);
    return 0;
}