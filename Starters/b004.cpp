#include<iostream>  
using namespace std;  
int main()  
{  
    int n , m , i , tmp;  
    cin>>n;  
    int jail[30]={0};  
    cin>>m;  
    for(i=0;i<m;i++){  
        cin>>tmp;  
        jail[tmp-1]=1;  
    }  
      
    for(i=0;i<n;i++){  
        if(jail[i]==0)  
        cout<<i+1<<" ";  
    }  
      
    return 0;  
}  