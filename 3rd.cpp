#include<iostream>
using namespace std;

int main()
{
  int a,b;
  cout<<"Enter two numbers "<<endl;
  cin>>a>>b;
  int c;
  c=a;
  a=b;
  b=c;
  cout<<"a="<<a<<" b="<<b<<endl;
  return 0;
}
