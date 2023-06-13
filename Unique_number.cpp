#include<iostream>
using namespace std;
#include<cmath>
int main()
{
    int n,l,i,rm;
    cin>>n;
    l=log10(n)+1;
    int a[l];
    for (i=0;i<l;i++)
    {
        rm=n%10;
        a[i]=rm;
        n/=10;
    }
    int c=0,j;
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if (a[i]==a[j]){
              c++;
              break;
            } 
        }
    }
    if (c==0)
        cout<<"Unique Number";
    else
        cout<<"Not Unique Number";
}