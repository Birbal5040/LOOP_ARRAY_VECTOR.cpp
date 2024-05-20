//print the matrix in wave form.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter row and column:"<<endl;
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter number:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"Matrix is: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Wave form matrix:"<<endl;
    for(int j=0;j<n;j++)
    {
        if(j%2==0)
        {
        for(int i=0;i<m;i++)
        {
            cout<<arr[i][j]<<" ";
        }
        }
        else
        {
            for(int i=m-1;i>=0;i--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
    }

}