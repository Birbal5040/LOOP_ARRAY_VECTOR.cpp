//find  first largest element in 2D array

#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter number of row :";
    cin>>n;
    cout<<"Enter number of column :";
    cin>>m;
    int arr[n][m];
    cout<<"Enter number of element :";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>arr[i][j];
    }
    int max=arr[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
            }
        }
    }
    cout<<max<<endl;
    return 0;
}