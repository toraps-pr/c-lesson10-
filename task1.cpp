#include<iostream> 
using namespace std;

int main()
{ 
    int x,y,z;

    cout<<"input the area of the 1st field:"<<"\n";
    cin>>x;
    cout<<"the amount of harvest from 1st field:"<<36*x<<"\n";

    cout<<"input the area of the 2nd field:"<<"\n";
    cin>>y;
    cout<<"the amount of harvest from 2nd field:"<<40*y<<"\n";

    cout<<"input the area of the 3rd field:"<<"\n";
    cin>>z;
    cout<<"the amount of harvest from 3rd field:"<<44*z<<"\n";

    cout<<"the amount of harvest from all fields:"<<36*x+40*y+44*z<<"\n";

    return 0;
}
