//Check the array sorted or not by vector.


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int arr[]={1,2,3,4,5,6,7,7};
    bool sortedflag=true; 
    for(int i=1;i<=8;i++)
    {  
        if(arr[i]==arr[i-1])
        {
              sortedflag=true;
              break;
        }
        if(arr[i]<=arr[i-1])
        {
            sortedflag=false;
        }
            }
    cout<<sortedflag;
    return 0;
}