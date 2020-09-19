#include<iostream>  
using namespace std;  
int main()  
{  
    int n;//°}¦CÁ`¼Æ   
    int num[20];//¥D­n°}¦C   
    int i;  
    int m;//³Q¤ñ¸û¼Æ   
    int maxc;//¤ñm¤jªº­Ó¼Æ   
    int minc;//¤ñm¤pªº­Ó¼Æ   
    maxc=0;  
    minc=0;  
    cin>>n;  
    for(i=0;i<n;i++)  
    {  
        cin>>num[i];  
    }  
    cin>>m;  
    for(i=n-1;i>=0;i--)  
    {  
    if(num[i]>m)  
        maxc++;  
    if(num[i]<m)  
        minc++;  
    }  
    cout<<maxc<<" "<<minc<<" ";  
      
    return 0;  
}  