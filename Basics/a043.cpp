#include <iostream>
using namespace std;
int main(){
    int N,M,tmp;
    cin>>N>>M;
    if(N>M){
        while(M!=0){
            tmp = M;
            M = N % M;
            N = tmp;
        }
        cout<<N;
    }
    else{
        while(N!=0){
            tmp = N;
            N = M % N;
            M = tmp;
        }
        cout<<M;
    }
}