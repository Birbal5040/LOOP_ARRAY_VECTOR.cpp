//Find index and element form array.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter your array element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x;
    cout<<"Enter number:"<<endl;
    cin>>x;
    cout<<"your number-> "<<x<<endl;
    bool flag=false;
    {
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x) 
        {
            cout<<"your indx of array-> "<<i<<endl;
            flag=true;
            break;
        }

    }
     if(flag==false)
    {
    cout<<"your indx of array--> "<<-1;
    }

    }
   

}