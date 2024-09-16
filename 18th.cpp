#include<iostream>
using namespace std;

float Area()
{
    int r;
    cout<<"Enter radius of a circle "<<endl;
    cin>>r;
    return 3.14*r*r;
}
int main()
{
    cout<<"Area of a circle is "<<Area();
    return 0;
}
