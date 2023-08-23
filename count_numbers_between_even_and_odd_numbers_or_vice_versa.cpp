#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i,j,c=0;
    cin>>n;
    vector <int> k;
    for(i=0;i<n;i++){
        cin>>j;
        k.push_back(j);
    }
    for(i=0;i<n-2;i++){
        if(((k[i])%2 ^ (k[i+2])%2))
        c++;
    }
    cout<<c;
}