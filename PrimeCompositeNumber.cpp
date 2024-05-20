//Find Prime and Composite number and also print factor.

#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int check(int n)
{
  int indx=0;
  cout<<"Factor is : "<<endl;
   bool flag=true;
   if(n==1) {
    cout<<"it is not prime and composite";
    return 0;
   }
   for(int i=1;i<=sqrt(n);i++)
   {
    if(n%i==0)   {
      cout<<i<<" ";
      indx++;
      flag=false;
   
    }
         }
         for(int i=sqrt(n);i>=1;i--)
         {
          if(n%i==0 && i!=sqrt(n)) cout<<n/i<<" ";
         }
   if(indx>1) cout<<"\nit is composite number";
    else cout<<"\nit is a prime number ";
}
int main()
{
   int n;
   cout<<"Enter number:";
   cin>>n;
   check(n);
   

}