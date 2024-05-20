#include<iostream>
using namespace std;
int main()
{
   int n,m;
   cout<<"Enter number of row and column :";
   cin>>n>>m;
   int arr[n][m];
   cout<<"Enter number of element for the matrix :";
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
    }
   }
   cout<<"\n";
   //print Matrix
   cout<<"Matrix is: "<<endl;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
   { 
    cout<<arr[i][j]<<" ";
   
    }
    cout<<endl;
   }
   cout<<"\n";
   //transpose matrix
   
   for(int i=0;i<n;i++)
   {
    for(int j=1+i;j<m;j++)
    {
        int team=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=team;
    }
   } 
   cout<<"Transpose Matrix is: "<<endl;

   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
   cout<<endl;
    //revers each row
    for(int k=0;k<n;k++)//traversing each row
    { 
        int i=0;
        int j=n-1;
        while(i<=j)//swaping k,i and j
        {
            int team=arr[k][i];
            arr[k][i]=arr[k][j];
            arr[k][j]=team;
            i++;
            j--;
        }

    }

    cout<<"Rotate Matrix by 90 degree is: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}