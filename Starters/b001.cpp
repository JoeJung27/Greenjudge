#include<iostream>  
using namespace std;  
int main()  
{  
    int n;  
    int num[20];  
    int i;  
    cin>>n;  
    for(i=0;i<n;i++)  
    {  
        cin>>num[i];  
    }  
    for(i=n-1;i>=0;i--)  
    cout<<num[i]<<" ";  
      
      
    return 0;  
}  
