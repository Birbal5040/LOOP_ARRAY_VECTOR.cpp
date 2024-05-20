//Find element second and third from the matrix.

#include<iostream>
//#include<climits>
using namespace std;
int main()
{   
  int arr[5]={111,125,6,89,3};
 // int max1= INT_MIN;
  int max1=arr[0];
  for(int i=0;i<=4;i++)
  {
    if(arr[i]>max1)
    max1=arr[i];
  }
 int max2=arr[0];
 for(int i=0;i<=4;i++)
 {
  if(arr[i]!=max1 && max2<arr[i])
  max2=arr[i];
 }
 
  int max3=arr[2];
 for(int i=0;i<=4;i++)
 {
  if(arr[i]!=max1 &&arr[i]!=max2 && max3<arr[i])
  max3=arr[i];

 }
 cout<<max1<<" "<<max2<<" "<<max3;
 return 0;
}
