//Convert the Binary to decimal number bit manumulate.

#include<iostream>
#include<string>
using namespace std;
int binary_to_decimal(string binary)
{
  int n=binary.length();
  cout<<"size is "<<n<<endl;
  int result=0;
  for(int i=n-1;i>=0;i--)
  {
    char ch=binary[i];
    int num=ch-'0';
    result=result+num*(1<<(n-i-1));
  }
   return result;
}
int main()
{
   string binary;
  cout<<"Enter binary number:";
  getline(cin,binary);

  cout<<binary_to_decimal(binary);
}
