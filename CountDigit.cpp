//Coutn the digit.

#include<iostream>
using namespace std;
int main()
{
  int n,count=0;
  cout<<"Enter digit :";
  cin>>n;
  // First Method
  // for(int i=1;n>0;count++)
  // {
  //   n/=10;
  // }
  // if(n==0)
  // {
  //   cout<<"1";
  // }
  // else
  // cout<<count;
  // Second Method
  for(int i=0;n>0;n/=10)
  {
   count=1+count;
  }
  cout<<count<<" digit";
  

}
    