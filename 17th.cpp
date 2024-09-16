#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter month name "<<endl;
    cin>>x;
    switch(x)
    {
        case 1: cout<<"Starting by Monday and 31 days in this month ";break;
        case 2: cout<<"Starting by Thursday and 29 days in this month ";break;
        case 3: cout<<"Starting by Friday and 31 days in this month ";break;
        case 4: cout<<"Starting by Monday and 30 days in this month ";break;
        case 5: cout<<"Starting by Wednesday and 31 days in this month ";break;
        case 6: cout<<"Starting by Saturday and 30 days in this month ";break;
        case 7: cout<<"Starting by Monday and 31 days in this month ";break;
        case 8: cout<<"Starting by Thursday and 31 days in this month ";break;
        case 9: cout<<"Starting by Sunday and 30 days in this month ";break;
        case 10: cout<<"Starting by Tuesday and 31 days in this month ";break;
        case 11: cout<<"Starting by Friday and 30 days in this month ";break;
        case 12: cout<<"Starting by Sunday and 31 days in this month ";break;
        default : cout<<"Invalid month Entered";
    }
    return 0;
}
