#include<iostream>
using namespace std;

void hanoi(int n, char from, char tmp, char target){
    if(n==1){
        cout<<"Ring "<<n<<" from "<<from<<" to "<<target<<'\n';
    }
    else{
        hanoi(n-1,from,target,tmp);
        cout<<"Ring "<<n<<" from "<<from<<" to "<<target<<'\n';
        hanoi(n-1,tmp,from,target);
    }
}
int main(){
    int n;
    cin>>n;
    hanoi(n,'1','2','3');
}