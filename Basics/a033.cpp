#include <iostream>  
#include <iomanip>  
using namespace std;  
  
int main(){  
    int n;  
    cin>>n;  
    if(n<10000){  
        cout<<"|"<<setw(8)<<setfill('_')<<n<<"|"<<endl;  
    }  
    else{  
        cout<<"|____"<<setw(4)<<setfill('0')<<n%10000<<"|"<<endl;  
    }  
}  
