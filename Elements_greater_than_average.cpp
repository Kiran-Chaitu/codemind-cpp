#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,avg,c=0,s=0;
    cin>>n;
    vector<int> v;
    for(i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    for(int i:v){
        s+=i;
    }
    avg=s/n;
    for(int i:v){
        if(i>=avg) c++;
    }
    cout<<c;
}