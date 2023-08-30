#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t,f=0;
    cin>>n;
    vector <int> v;
    for(i=0;i<n;i++){
        cin>>t;
        if(t%2!=0) f=1;
        v.push_back(t);
    }
    if(f==0) cout<<"True";
    else cout<<"False";
}