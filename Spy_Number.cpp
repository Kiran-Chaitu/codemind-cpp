#include<iostream>
using namespace std;
int main()
{
    int pro=1,s=0,t;
    cin>>t;
    while(t){
        int rm=t%10;
        s+=rm;
        pro*=rm;
        t/=10;
    }
    if(pro==s)  cout<<"Spy Number";
    else cout<<"Not Spy Number";
}