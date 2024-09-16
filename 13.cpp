#include<iostream>
using namespace std;

int main()
{
    int i,j,k,line;
    cout<<"Enter the lines "<<endl;
    cin>>line;
    for(i=1;i<=line;i++)
    {
        k=1;
        for(j=1;j<=2*line-1;j++)
        {
            if(j>=line+1-i&&j<=line-1+i)
            {
             cout<<k;
             j<line?k++:k--;
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
}
