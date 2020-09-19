#include<iostream>  
using namespace std;  
int main()  
{  
    int n,m;  
    cin>>n >> m;  
    if(m==2||m==5||m==8)  
        cout<<"200";  
    else if(n%2==1)  
        cout<<"100";  
    else if(n==m)  
        cout<<"50";  
    else   
        cout<<"0";  
  
    return 0;  
}  