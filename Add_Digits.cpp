#include<iostream>
using namespace std;
int dgs(int a)
{
    int rm,sum=0;
    while(a){
        rm=a%10;
        sum+=rm;
        a/=10;
    }
    return sum;
}
int main()
{
    int n,i,rm,s,q;
    cin>>n;
    s=dgs(n);
    while(s>=10)
    {
        q=dgs(s);
        s=q;
    }
    cout<<""<<s;
}