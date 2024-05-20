//Addition of two matrix.  some error   

#include<iostream>
using namespace std;
int main()
{  
  //First matrix input

  int n,m;
  cout<<"Enter row and column of first matrix :";
  cin>>n>>m;
  int arr1[n][m];
  cout<<"Enter number of element :";
  for(int i=0;i<n;i++)//input
  {
    for(int j=0;j<m;j++)
    {
      cin>>arr1[i][j];
    }
  }
  cout<<"\n";

  //second matrix input
  int p,q;
  cout<<"Enter row and column of second matrix :";
  cin>>p>>q;
  int arr2[p][q];
  cout<<"Enter number of element :";
   for(int i=0;i<p;i++)//input
  {
    for(int j=0;j<q;j++)
    {
      cin>>arr1[i][j];
    }
  }
  cout<<"\n";

  //print first matrix
  cout<<"First matrix "<<endl;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cout<<arr1[i][j]<<" ";
    }
    cout<<"\n";
  }
  cout<<endl;

  //print second matrix
  cout<<"second matrix "<<endl;
  for(int i=0;i<p;i++)
  {
    for(int j=0;j<q;j++)
    {
      cout<<arr1[i][j]<<" ";
    }
    cout<<"\n";
  }

  //sum of two matrix
   int arr3[n][q];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<q;j++)
    {
       arr3[i][j]=arr1[i][j]+arr2[i][j];
       //cin>>arr3[i][j];
    }
    
  }
  cout<<"\n";
  cout<<"sum of two matrix ";
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cout<<arr3[i][j]<<" ";
    }
    cout<<endl;
  }
  
 return 0;
}
