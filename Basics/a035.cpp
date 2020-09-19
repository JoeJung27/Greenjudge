#include<iostream>  
#include<cmath>  
using namespace std;  
int main(){  
    double a,b;  
    cin>>a>>b;  
    cout<<int(floor(1+(b*(log10(a)))));  
}  
