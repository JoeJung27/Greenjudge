#include <iostream>  
using namespace std;  
  
int main(){  
    int n,m;  
    char x;  
    cin>>n>>x>>m;  
    if(x=='+'){  
        cout<<n+m;  
    }  
    if(x=='-'){  
        cout<<n-m;  
    }  
    if(x=='*'){  
        cout<<n*m;  
    }  
      
}  
