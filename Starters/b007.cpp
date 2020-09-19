#include<iostream>
using namespace std;

int main(){
    string m;
    cin>>m;
    for(int i = m.length();i>0;i--){
        cout<<m[i-1];
    }
}