// #include <iostream>
// using namespace std;

// bool isPalindrome(int i , string &s) {
//     if(i>= s.size()/2){
//         return true;
//     }
//     if(s[i] != s[s.size()-i-1]){
//         return false;
//     }

//     return isPalindrome(i+1,s);
// }

// int main(){
//     string s = "assa";
//     cout << isPalindrome(0,s);
//     return 0;
// }

#include <iostream>
using namespace std;

bool isPalindrome(int i, const string &s) {  // Use 'const' for string to avoid unnecessary modification
    if (i >= s.size() / 2) {
        return true;
    }
    if (s[i] != s[s.size() - i - 1]) {
        return false;
    }
    return isPalindrome(i + 1, s);
}

int main() {
    string s;
    cout << "Enter a string to check if it is a palindrome: ";
    cin >> s;
    
    if (isPalindrome(0, s)) {
        cout << "Yes, it's a palindrome." << endl;
    } else {
        cout << "No, it's not a palindrome." << endl;
    }

    return 0;
}
