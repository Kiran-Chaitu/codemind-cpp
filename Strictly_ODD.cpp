#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t,f=0,c=0;
    cin >>n;
    vector <int> v;
    for(i=0;i<n;i++){
        cin>>t;
        if (t%2!=0) c++;
        v.push_back(t);
    }
    for(i=1;i<n;i+=2){
        if(v[i]%2!=0) f++;
    }
    if(f==c) cout<<"True";
    else cout<<"False";
}