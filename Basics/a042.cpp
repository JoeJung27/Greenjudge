#include <iostream>
using namespace std;
int main(){
    int N,ans;
    ans = 13;
    cin>>N;
    for(int i=1;i<N;i++){
        ans = (ans*13)%100;
    }
    cout<<int(ans/10);
}