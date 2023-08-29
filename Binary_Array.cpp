#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int i,n,t,k=0;
    cin>>n;
    vector <int> v;
    for(i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    for(int i:v){
        if(i!=0 and i!=1){
            k=1;
            cout<<"False";
            break;
        }
    }
    if(k==0)    cout<<"True";
}