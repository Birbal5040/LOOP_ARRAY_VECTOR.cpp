//Array printing give value by user.

#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter your array size :";
    cin>>size;
    int arr[size];
    cout<<"Enter your array element :";
    for(int i=0;i<size;i++)//input
    {
        cin>>arr[i];
       
    }
    //array print
    cout<<"Arrar printing "<<endl;
    for(int i=0;i<size;i++)
    {
     cout<<arr[i]<<" ";
    }
    return 0;
}