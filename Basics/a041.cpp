#include <iostream>  
using namespace std;  
int main(){  
    int a,b,c;  
    cin>>a;  
    b=0;  
    while(a>=5){  
        a=a-5;  
        a=a+1;  
        b=b+5;  
    }  
    if(b>0){   
        c=b+a;  
        cout<<c;  
    }  
    else{  
        cout<<a;  
    }   
    return 0;  
}  