#include<iostream>  
#include<iomanip>  
using namespace std;  
int main()  
{  
    int n, j, i;  
    cin>>n;  
    for(i=1;i<=n;i++){  
        for(j=1;j<=n;j++){  
  
            cout<<j<<"x"<<i<<"="<<setw(2)<<i*j<<"  ";  
        }  
        cout<<endl;  
    }  
      
    return 0;  
}  