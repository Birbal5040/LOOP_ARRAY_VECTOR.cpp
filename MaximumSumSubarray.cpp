//Maximum sum of sub array'
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,5,3,6,4,10,10,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
   // int sumMax;
    int maxx=INT_MIN;
    int index=-1;
    for(int i=0;i<n-k+1;i++)
    { 
        int sum=0;
        for(int j=i;j<i+k;j++)
        {
            sum+=arr[j];
        }
         if(maxx<sum)
         {
            maxx=sum;
            index=i;
         }
    }
    cout<<maxx;
    cout<<"\n"<<index;

}