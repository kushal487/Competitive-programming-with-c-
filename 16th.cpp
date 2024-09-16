#include<iostream>
using namespace std;
int find()
{
    int max,arr[10];
    cout<<"Enter 10 numbers "<<endl;
    for(int i=0;i<10;i++)
     cin>>arr[i];
     max=arr[0];
    for(int i=1;i<10;i++)
     max=max>arr[i]?max:arr[i];
    return max; 
}
int main()
{
    cout<<"The max number is "<<find();
    return 0;
}
