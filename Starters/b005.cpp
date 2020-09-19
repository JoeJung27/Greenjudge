#include<iostream>  
using namespace std;  
int main()  
{  
    int i, n, j, tmp, max=0, maxi=0, pt=0;  
    int song[30][2]={0};  
    cin>>n;  
    for(i=0;i<n;i++){  
        cin>>tmp;  
        for(j=0;j<pt;j++){  
            if(song[j][0]==tmp) {  
                song[j][1]++;  
                break;  
            }  
        }     
        if(j==pt){  
            song[j][0]=tmp;  
            song[j][1]++;  
            pt ++;  
        }  
    }  
  
    for(i=0;i<n;i++){  
        if(song[i][1]>max){  
            max=song[i][1];  
            maxi=song[i][0];  
        }  
    }  
    cout<<maxi<<" "<<max<<" ";  
    return 0;  
}  
