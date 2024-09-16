#include<iostream>
using namespace std;

int main()
{
    int i,n,sum=0;
    float avg;
    cout<<"Enter n numbers "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
     sum=sum+i;
    avg=(float)sum/n;
    cout<<"Avg of "<<n<<" is "<<avg<<endl;
    return 0; 
}
