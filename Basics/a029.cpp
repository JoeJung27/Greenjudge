#include <iostream>  
using namespace std;  
  
int main(){  
    int x,y;  
    cin>>x>>y;  
    int o=x;  
    int n = x+1;  
    for(int i=x;i<y;i++){  
        x += n;  
        n += 1;  
    }  
    for(int m=o;m<y;m++){  
        cout<<o<<"+";  
        o+=1;  
    }  
    cout<<o;  
    cout<<"="<<x;  
}  