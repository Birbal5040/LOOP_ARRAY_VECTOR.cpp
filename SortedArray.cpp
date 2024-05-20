//Print the array sorted form.

#include<iostream>
using namespace std;
int main()
{
    int arr[7]={1,2,3,7,5,6,4};
    bool sortedflag=true;
    for(int i=0;i<7;i++)
    {
        if(arr[i]>=arr[i-1])

        {
           sortedflag=false;
        }
    }
   cout<<sortedflag;
   return 0;
}
