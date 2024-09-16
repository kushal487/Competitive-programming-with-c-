#include<iostream>
using namespace std;

class Cal
{
private:
    int a,b;
public:
    void setdata();
    void add();
    void sub();
    void multi();
    void div();
};
void Cal::setdata()
{
    cout<<"Enter two numbers "<<endl;
    cin>>a>>b;
}
void Cal::add()
{
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}
void Cal::sub()
{
    cout<<"Sub of "<<a<<" and "<<b<<" is "<<a-b<<endl;
}
void Cal::multi()
{
    cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
}
void Cal::div()
{
    cout<<"Division of "<<a<<" and "<<b<<" is "<<(float)a/b<<endl;
}
int main()
{
    Cal s;
    s.setdata();
    s.add();
    s.sub();
    s.multi();
    s.div();
    return 0;
}


