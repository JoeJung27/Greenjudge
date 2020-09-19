#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;

int is_palindrome(string s) {
    return equal(s.begin(), s.begin() + s.length() /2, s.rbegin());
}
 
int main() {
    string s;
    
    cin >> s;
    
    if (is_palindrome(s)){
        cout <<"YES"<< endl;
    }
    else{
        cout <<"NO"<< endl;
    }
    
}