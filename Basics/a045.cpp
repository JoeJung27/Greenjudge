#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int N;
    bool prime = 1;
    cin>>N;

    for(int i=2;i<=sqrt(N);i++){
		if(N%i==0){
            prime = 0;
            break;
		}
	}

    if(prime) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}