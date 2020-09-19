#include <iostream>  
using namespace std;  
  
int main(){  
    int x,y;  
    cin>>x>>y;  
    if(x<y){  
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
    else{  
        int o=x;  
        int p=y;  
        int n = y+1;  
        for(int i=y;i<x;i++){  
            y += n;  
            n += 1;  
        }  
        for(int m=o;m>p;m--){  
            cout<<o<<"+";  
            o -= 1;  
        }  
        cout<<o;  
        cout<<"="<<y;  
    }  
          
}  