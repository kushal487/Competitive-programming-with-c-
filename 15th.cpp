#include<iostream>
using namespace std;

void bin(int n)
{
    if(n)
    {
      cout<<n%2<<" ";
       bin(n/2);
    }
}
int main()
{
    bin(25);
}
