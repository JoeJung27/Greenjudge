#include<iostream>    
#include<stdio.h>    
using namespace std;  
    
int main(){      
    while(1){  
        int x;  
        int y;  
        scanf("%d%d",&x,&y);  
        if(x>y) printf("A %d\n",x-y);    
        if(y>x) printf("B %d\n",y-x);    
        if(x==y && (x!=0 && y!=0)) printf("0\n");  
          
        if(x==0 && y==0) break;  
    }  
      
}    