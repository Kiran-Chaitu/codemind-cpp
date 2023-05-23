#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,c;
    cin>>n;
    c=a+b;
    while(c<=n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(n-a<b-n) cout<<a;
    else if(n-a==b-n)    cout<<a<<" "<<b;
    else cout<<b;
}