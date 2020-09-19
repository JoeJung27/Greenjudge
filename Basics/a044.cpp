#include<iostream>
using namespace std;

int main(){
    int n,sum;
    sum = 0;
    cin>>n;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum += i;
        }
    }
    if(sum>n){
        cout<<"Abundant";
    }
    else if(sum<n){
        cout<<"Deficient";
    }
    else{
        cout<<"Perfect";
    }
}