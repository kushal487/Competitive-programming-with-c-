#include<iostream>
using namespace std;

void Char()
{
    char ch;
    cout<<"Enter an character "<<endl;
    cin>>ch;
    if(ch>='a'&&ch<='z')
    {
        ch=ch-32;
        cout<<ch<<endl;
    }
    else
    {
        ch=ch+32;
        cout<<ch<<endl;
    }
}
int main()
{
    Char();
    return 0;
}
