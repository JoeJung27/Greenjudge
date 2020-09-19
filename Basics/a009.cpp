#include <iostream>  
using namespace std;  
  
int main(){  
    int a;  
    cin>>a;  
    if (a/10 <1){  
        cout<<a*100;  
    }  
    if (a/10 >=1){  
        cout<<a/11*1000+a%11*100;  
    }  
    return 0;  
}  
