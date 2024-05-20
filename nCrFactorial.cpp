//Find value of nCr.

#include<iostream>
using namespace std;
int fact(int x)
{   int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact*=i;
    }
   return fact;
}
int main()
{   int n,r;
  cout<<"Enter n for nCr :";
  cin>>n;
  cout<<"Enter r for nCr :";
  cin>>r;
    int nfact=fact(n);
    int nrfact=fact(n-r);
    int rfact=fact(r);
    int nCr=nfact/(nrfact*rfact);
    cout<<"nCr="<<nCr;
    return 0;
}
