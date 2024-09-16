#include<iostream>
using namespace std;

int sum()
{
    int n,i,sum=0,fact=0;
    cout<<"Enter n numbers "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=i*i;
        sum=sum+(fact/i);
    }
    return sum;
}
int main()
{
    cout<<"sum of series : "<<sum()<<endl;
    return 0;
}
