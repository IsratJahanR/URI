#include<iostream>
using namespace std;
int main()
{
   int n,i,a[10000];
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }

for(i=0;i<n;i++)
   {
   if(a[i]<0&&a[i]%2!=0)
       cout<<"ODD NEGATIVE"<<endl;
   if(a[i]==0)
       cout<<"NULL"<<endl;
   if(a[i]>0&&a[i]%2!=0)
       cout<<"ODD POSITIVE"<<endl;
   if(a[i]<0&&a[i]%2==0)
       cout<<"EVEN NEGATIVE"<<endl;
   if(a[i]>0&&a[i]%2==0)
       cout<<"EVEN POSITIVE"<<endl;
   }
    return 0;
}
