#include <iostream>
using namespace std;

void isprime(int n){
    int count = 0;
    for(int i = 1; i<=n; i++){

		if(n%i == 0){
			 count++ ;
		}
    }
    if(count == 2){
        cout<< "YES";
    }
    else{
        cout<< "NO";
    }

}

int main(){
    int n;
    cin>> n;
    isprime(n);
}