#include<iostream>    
#include<stdio.h>    
using namespace std;    
int main(){      
    int n;  
    scanf("%d",&n);  
    int x[n];  
    int y[n];  
    for(int i=0;i<n;i++){  
        scanf("%d%d",&x[i],&y[i]);    
    }  
    for(int j=0;j<n;j++){  
        if(x[j]>y[j]) printf("A %d\n",x[j]-y[j]);    
        if(y[j]>x[j]) printf("B %d\n",y[j]-x[j]);    
        if(x[j]==y[j]) printf("0\n");  
    }    
}    
