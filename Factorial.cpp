//find factorial of number

#include<iostream>
using namespace std ;
int main()
{     
    int n;
    cout<<"Enter number your which you are want calculate factorial:";
    cin>>n;
     int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<<fact;
}