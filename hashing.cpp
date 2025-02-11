#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    //hash func
    int hash[13] = {0};
    for(int i;i<n;i++){
        hash[arr[i]] +=1;
    }

    int q; //no of queries
    cin >> q;
    while(q--){
        int num; //query of which number ? (how many times it comes)
        cin >> num;
        //fetch
        cout << hash[num] << endl;

    }
    return 0;
}