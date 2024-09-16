#include<iostream>
using namespace std;

int Cuboid(int =1,int =1,int =1);
int main()
{
    int l,b,h;
    cout<<"Enter Length,Breath and height "<<endl;
    cin>>l>>b;
    cout<<"Volume of a cuboid is "<<Cuboid(l,b);
    cout<<endl;
    cout<<"Enter Length,Breath and height "<<endl;
    cin>>l>>b>>h;
    cout<<"Volume of a cuboid is "<<Cuboid(l,b,h);
    
}
int Cuboid(int l,int b,int h)
{
    return l*b*h;
}
