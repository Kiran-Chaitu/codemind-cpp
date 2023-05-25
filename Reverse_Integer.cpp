#include<iostream>
using namespace std;
int main()
{
    int x,rev=0;
    cin>>x;
    while(x){
        rev=rev*10+(x%10);
        x/=10;
    }
    cout<<rev;
}