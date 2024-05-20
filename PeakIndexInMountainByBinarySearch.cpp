#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,3,4,6,7,9,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    //cout<<n<<endl;
    int low=1;
    int high=n-2;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])
        {
        cout<<mid;
        break;
        }
        if(arr[mid]>arr[mid+1])
        high=mid-1;
        if(arr[mid]<arr[mid+1])
        low=mid+1;
    }
   // return 0;

}