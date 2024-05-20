//Convert number Decimal to binary by bit manumulate.

#include<iostream>
using namespace std;
#include<bits/stdc++.h>
string decimal_to_binary(int num)
{
    string res="";
    while(num>0)
    {
         if(num%2==0) 
         {
            res="0"+res;
         }
         else 
         
         {
            res="1"+res;
         }
         num=num/2;
    }
    return res;
}
int main()
{
  int num;
  cout<<"Enter your number: ";
  cin>>num;
    cout<<decimal_to_binary(num);
}