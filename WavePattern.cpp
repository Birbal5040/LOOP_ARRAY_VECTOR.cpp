//Wave pattern of Matrix

#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={1,3,4,5,6,7,8,9,2};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++)
    {   if(i%2==0)
        for(int j=0;j<3;j++)
        {   
            cout<<arr[i][j]<<" ";

        }
        else
        for(int j=2;j>=0;j--)
        {
            cout<<arr[i][j]<<" ";
        }
       
    }

}