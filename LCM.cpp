#include<iostream>
using namespace std;
int main()
{
    int a,b,m;
    cin>>a>>b;
    m=(a>b)?a:b;
    while(1){
        if(m%a==0 and m%b==0){
          break;  
        }
        m++;
    }
    cout<<m;
}