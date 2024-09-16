#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter an number "<<endl;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
         break;
    }
    if(i==n)
     cout<<"Prime number "<<endl;
    else
     cout<<"Composite number"<<endl;
    return 0; 
}
