#include<iostream>  
using namespace std;  
int main()  
{  
    int n,m;  
    int count=0;  
    cin>>n>>m;  
    while(m>=n)  
    {  
        m=m/3;  
        count ++;   
    }  
    cout<<count;  
      
    return 0;  
}  
