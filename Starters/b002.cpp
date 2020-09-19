#include<iostream>  
using namespace std;  
int main()  
{  
    int n;  
    int num[20];  
    int i;  
    int max;  
    int maxi;  
    cin>>n;  
    max=num[0];  
    maxi=0;  
    for(i=0;i<n;i++)  
    {  
    cin>>num[i];  
    }  
    max=num[0];  
    maxi=0;  
    for(i=0;i<n;i++)  
    if(num[i]>max)  
        {  
            max=num[i];  
            maxi=i;  
        }  
    cout<<maxi+1<<" "<<max<<" ";  
    return 0;  
}  