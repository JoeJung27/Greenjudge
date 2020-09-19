#include <iostream>  
using namespace std;  
  
int main(){  
    int g;  
    cin>>g;  
    int m = 1;  
    while(g != 1){  
        if (g%2 == 0){  
            g /= 2;  
            m += 1;  
        }  
        else{  
            g = g*3+1;  
            m += 1;  
        }  
    }  
    cout<<m;  
    return 0;  
}  