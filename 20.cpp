#include<iostream>
using namespace std;


void add(int a,float b)
{
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}
void add(int a,char b)
{
    cout<<"Sum of "<<a<<" and "<<a<<" is "<<a+b<<endl;
}
int main()
{
    int a;
    float b;
    char c;
    cout<<"Enter two numbers "<<endl;
    cin>>a>>b;
    add(a,b);
    cout<<endl;
    cout<<"Enter two numbers "<<endl;
    cin>>a>>c;
    add(a,c);
}
