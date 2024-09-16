#include<iostream>
using namespace std;

int main()
{
    int line,i,j;
    cout<<"Enter the lines "<<endl;
    cin>>line;
    for(i=0;i<line;i++)
    {
      char ch='A';
        for(j=0;j<line;j++)
        {
            if(j<=i)
            {
             cout<<ch;
              ch++;
            }
            else
             cout<<" "; 
        }
        cout<<endl;
    }
    return 0;
}
