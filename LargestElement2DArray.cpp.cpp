//array is a continious memory allocation.

#include<iostream>
using namespace std;
int main()
{
    int arr[2][2]={2,3,6,86};
    int max=arr[0][0];
    for(int i=0;i<2;i++)
 {    for(int j=0;j<2;j++)
       { if(max<arr[i][j])
        {
            max=arr[i][j];
        }
       }
    }
    cout<<max;
}