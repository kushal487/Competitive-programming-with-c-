#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter a year "<<endl;
    cin>>year;
    if(year%100)
    {
        if(year%4==0)
         cout<<year<<" is a leap year "<<endl;
        else
         cout<<year<<" is not a leap year "<<endl; 
    }
    else
    {
      if(year%400)
       cout<<year<<" is not a leap year "<<endl;
      else
       cout<<year<<" is a leap year "<<endl; 
    }
    return 0;
}
