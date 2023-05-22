#include<iostream>
#include<math.h>
using namespace std;
int main()
{   
    int t,z,i;
    cin>>t>>z;
    for(i=t;i<=z;i++)
    {
        int l,k,c=0,rm;
        k=i;
        l=0;
        while(k){
            l++;
            rm=k%10;
            if (rm!=0 and i%rm==0) c++;
            k/=10;
        }
        if(c==l) cout<<""<<i<<" ";
    }
}