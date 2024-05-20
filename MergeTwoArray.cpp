//Merge of two array.

#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>& res)
{
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size())
    {
        if(a[i]<b[j])
        {
            res[k]=a[i];
            k++;
            i++;
        }
        else
        {
            if(a[i]>b[j])
            {
                res[k]=b[j];
                j++;
                k++;
            }
        }
        if(i==a.size())
        {
            res[k]=b[j];
            k++;
            j++;

        }
        if(i==b.size())
        {
            res[k]=b[i];
            k++;
            i++;
            
        }
    }
}
int main()
{
    int arr[]={2,4,6,7,8};
    int n1=sizeof(arr)/sizeof(arr[0]);
      vector<int>a(arr,arr+n1);
      int brr[]={4,7,9,10.16};
      int n2=sizeof(brr)/sizeof(brr[0]);
      vector<int>b(brr,brr+n2);
      vector<int>res(n1+n2);
      merge(a,b,res);
    for(int i=0;i<res.size();i++)
    {
          cout<<res[i]<<" ";
    }
    
}
