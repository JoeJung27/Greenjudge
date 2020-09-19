#include<iostream>  
using namespace std;  
int main()  
{  
    int n , m;  
    cin>>n >> m;  
    if(n*60+m>860 && n*60+m<980)  
    cout<<"YES";  
    else  
    cout<<"NO";  
    return 0;  
}  