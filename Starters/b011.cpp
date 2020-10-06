#include<iostream>
using namespace std;
int main(){
	string l1,l2,l3;
	cin>>l1>>l2>>l3;
	char c1[l1.length()],c2[l2.length()],c3[l3.length()];
	
	for(int i=0;i<sizeof(c1);i++){   //put string in to char array
		c1[i] = l1[i];
	}
	for(int i=0;i<sizeof(c2);i++){
		c2[i] = l2[i];
	}
	for(int i=0;i<sizeof(c3);i++){
		c3[i] = l3[i];
	}
	
} 
