#include<bits/stdc++.h>
using namespace std;
void passValue(string s){
    s[0] = 't';
    cout << s << endl;
}

void passValue1(int num){
    cout << num << endl;
    num+=5;
    cout << num << endl;
    num+=5;
    cout << num << endl;
}

int main(){
    string s = "raj";
    passValue(s);
    cout << s << endl;
    cout << endl;

    int num = 10;
    passValue1(num);
    cout << num << endl;
    cout << endl;
    return 0;
}