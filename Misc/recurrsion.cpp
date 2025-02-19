#include <iostream>
using namespace std;

void printGfg(int N) {
    // Code here
    if(N == 0){
        return;
    }
    
    printGfg(N-1);
    cout<< "GFG ";
}

int i = 0;
void printNos(int n) {
    // Your code here
    if(i == n){
    return;}

i++;
cout<< i << " ";
printNos(n);
}

int main(){
    int N = 5;
    int n = 10;
    printGfg(N);
    cout<< endl;
    printNos(n);

}