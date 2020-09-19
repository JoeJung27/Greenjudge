#include <iostream>  
using namespace std;  
  
int main(){  
    int N,R,X;  
    cin>>N>>R;  
    X=N;  
    for(int i=1;i<R;i++){  
        X = X*(N-i);  
    }  
    cout<<X;  
}  