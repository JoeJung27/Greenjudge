#include<iostream>  
using namespace std;  
int main()  
{  
    int n,flag;  
    flag=0;  
    cin>>n;  
    while(n>0)  
    {  
        if(n%10!=0)  
            flag=1;  
        if(flag==1)  
        cout<<n%10;  
        n=n/10;  
    }  
      
    return 0;  
}  