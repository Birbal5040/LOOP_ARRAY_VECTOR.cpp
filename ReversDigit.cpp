//Print the reverse of digit.

#include<iostream>
using namespace std;
int main()
{
    int revers=0,lastdigit=0,n;
    cout<<"Enter digit :";
    cin>>n;
    for(;n>0;n/=10)
    {
        revers*=10;
        lastdigit=n%10;
        revers+=lastdigit;
    }
    cout<<revers;
    return 0;
}