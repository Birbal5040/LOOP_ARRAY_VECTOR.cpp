#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter number of element :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[1];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    cout<<max;
    return 0;
}