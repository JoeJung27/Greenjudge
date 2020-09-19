#include<iostream>  
using namespace std;  
int main()  
{  
    int n,m,sum;  
    cin>>n >> m;  
    sum=0;  
    if(m==2||m==5||m==8)  
        sum=sum+200;  
    if(n%2==1)  
        sum=sum+100;  
    if(n==m)  
        sum=sum+50;   
          
        cout<<sum;  
  
    return 0;  
}  