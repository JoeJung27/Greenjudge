#include<iostream>    
using namespace std;  
    
int main(){      
    int x,y,n;  
    cin>>n;  
    for(int i=1;i<=n;i++){  
        cin>>x>>y;  
        if(x>y) cout<<"Case "<<i<<": "<<"A "<<x-y<<"\n";    
        else if(y>x) cout<<"Case "<<i<<": "<<"B "<<y-x<<"\n";    
        else cout<<"Case "<<i<<": "<<"0"<<"\n";  
    }     
}    