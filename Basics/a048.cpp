#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    for(i=1; i<=n; i++) {
        for(j=n-1; j>=i; j--) {
            cout<<"_";
        }
    for(j=1; j<=i*2-1; j++) {
        cout<<i;
    }
  
    cout<<endl;
    }
}