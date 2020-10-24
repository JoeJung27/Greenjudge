#include<iostream>
#include<sstream>

using namespace std;

int main(){

	int a,b,c;
	string l1,l2,l3,ns1,ns2,ns3;
	cin>>l1>>l2>>l3;
	char c1[l1.length()],c2[l2.length()],c3[l3.length()];
	
	for(int i=0;i<sizeof(c1);i++){   //put string in to char array
		c1[i] = l1[i];
		if(c1[i]>47 && c1[i]<58){
			ns1 += c1[i];
		}
	}
	for(int i=0;i<sizeof(c2);i++){
		c2[i] = l2[i];
		if(c2[i]>47 && c2[i]<58){
			ns2 += c2[i];
		}
	}
	for(int i=0;i<sizeof(c3);i++){
		c3[i] = l3[i];
		if(c3[i]>47 && c3[i]<58){
			ns3 += c3[i];
		}
	}

	stringstream degree(ns1);
	degree>>a;
	stringstream degree2(ns2);
	degree2>>b;
	stringstream degree3(ns3);
	degree3>>c;
	cout<<a+b+c;
} 
