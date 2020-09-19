#include<iostream>  
#include<stdio.h>  
using namespace std;  
int main(){  
    int x,y;  
    scanf("%d%d",&x,&y);  
    if(x>y) printf("A %d",x-y);  
    if(y>x) printf("B %d",y-x);  
    if(x==y) printf("0");  
}  