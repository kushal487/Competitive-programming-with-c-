#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float x1,x2,y1,y2,dis;
    cout<<"Enter the value of x1,x2,y1,y2 "<<endl;
    cin>>x1>>x2>>y1>>y2;
    dis = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    cout<<"Distance = "<<dis<<endl;
}

