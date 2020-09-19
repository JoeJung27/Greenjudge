#include<iostream>    
using namespace std;  
    
int main(){      
    while(1){  
        int x;  
        int y;  
        cin>>x>>y;  
        if(cin.fail()) break;  
        else if(x>y) cout<<"A "<<x-y<<"\n";    
        else if(y>x) cout<<"B "<<y-x<<"\n";    
        else cout<<"0"<<"\n";  
    }  
      
}    