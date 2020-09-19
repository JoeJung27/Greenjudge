#include<iostream>
using namespace std;

int main(){
    string A;
    cin>>A;
    
    char B[A.length()];

    for(int i=0;i<A.length();i++){
        B[i] = A[i];
        if (B[i] == 'A' || B[i] == 'B'){
            B[i] = B[i]+24;
        }
        else{
            B[i] = B[i]-2;
        }
    }

    for(int i=0;i<A.length();i++){
        cout<<B[i];
    }

}