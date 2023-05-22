#include<iostream>
using namespace std;
int main()
{
   int n,sq,sum=0;
   cin>>n;
   sq=n*n;
   while(sq){
       sum+=(sq%10);
       sq/=10;
   }
   if(sum==n)   cout<<"Neon Number";
   else     cout<<"Not Neon Number";
}