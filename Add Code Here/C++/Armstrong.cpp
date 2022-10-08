#include <iostream>
using namespace std;
int main()
{
  int n,r,t,sum=0;
  cout<<"Enter a number"<<endl;
  cin>>n;
  t=n;
  while(n!=0)
  {
    r=n%10;
    sum=sum+r*r*r;
    n=n/10;
    }
    if(t==sum)
    {
      cout<<"Number is Armstromg"<<endl;
      }
      else
      {
       cout<<"Number is not Armstrong"<<endl;
       }
       }
