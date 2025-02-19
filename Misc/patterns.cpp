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

void p2(int a){
    for(int i=0;i<a;i++){
       
       for(int j=0;j<=i;j++){
        cout<<"* ";
       }
        cout << endl;
    }
}

void p3(int n){
    for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<< j << " ";
		}
		cout<< endl;
	}
}

void p4(int n){
    for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<< i << " ";
		}
		cout<< endl;
	}
}

void p5(int n){
    int c;
	c=n;
	for(int i=1;i<=n;i++,c--){
		for(int j=1;j<=c;j++){
			cout<< "j" ;
		}
		cout<< endl;
	}
}

void p6(int n){
    int c;
	c=n;
	for(int i=1;i<=n;i++,c--){
		for(int j=1;j<=c;j++){
			cout<< j << " " ;
		}
		cout<< endl;
	}
}

void p7(int n){
     for(int i = 0;i<n;i++){
        //space
        for(int j=0 ; j<n-i-1;j++){
            cout<<" ";
        }

        //star
        for(int k =0 ; k< 2*i+1;k++){
            cout<<"*";
        }

        //space
        for(int j=0 ; j<n-i-1;j++){
            cout<<" ";
        }
        cout << endl;
    }
}

void p8(int n){
    for(int i = 0;i<n;i++){
        //space
        for(int j=0 ; j<i;j++){
            cout<<" ";
        }

        //star
        for(int k =0 ; k< 2*n-(2*i+1);k++){
            cout<<"*";
        }

        //space
        for(int j=0 ; j<i;j++){
            cout<<" ";
        }
        cout << endl;
    }
}

void p9(int n){
    p7(n);
    p8(n);
}

void p10(int n) {
    for(int i = 1; i<=2*n-1;i++){
        int stars = i;
        if(i>n){
            stars = 2*n-i;
        }

        for(int j = 1; j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}

int main(){
    int a = 4, b = 4, n=5;
    cout<< endl;
    p1(a,b);
    cout<< endl;
    p2(a);
    cout<< endl;
    p3(n);
    cout<< endl;
    p4(n);
    cout<< endl;
    p5(n);
    cout<< endl;
    p6(n);
    cout<< endl;
    p7(n);
    cout<< endl;
    p8(n);
    cout<< endl;
    p9(n);
    cout<< endl;
    p10(n);
    cout<< endl;
    return 0;
}