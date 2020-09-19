#include<iostream>    
using namespace std;  

int main(){
	int a;
	int p=0;
	cin>>a;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
		    if(i%3==j%3){
			    cout<<"@";
		    }
			else{
				cout<<"-";
			}
		}
		cout<<'\n'; 
	}
				
}