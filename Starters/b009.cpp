#include<iostream>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    while(1){
        if(a == ""){
            cout<<"YES";
            return 0;
        }
        if(b == ""){
            cout<<"NO";
            return 0;
        }
        if(a[0]==b[0]){
            b.erase(0,1);
            a.erase(0,1);
        }
        else if(a[0]!=b[0]){
            b.erase(0,1);
        }
    }
}       