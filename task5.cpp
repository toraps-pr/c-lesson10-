#include <iostream> 
#include <cmath>
using namespace std;

int main()
{
    double x,y,h,z;
    cout<<"Input the x: "<<endl;
    cin>>x;
    cout<<"Input the y: "<<endl;
    cin>>y;
    cout<<"Input the h: "<<endl;
    cin>>h;
    
    z=sqrt((1-2*pow(cos(x),2)/(sin(h)-cos(y))));

    if(1-2*pow(cos(x),2)<0 && sin(h)-cos(y)>0){
        cout<<"We cannot calculate the result. Input other values! (dn is negative, n is positive)"<<endl;
    }

    else if(1-2*pow(cos(x),2)>0 && sin(h)-cos(y)<0){
        cout<<"We cannot calculate the result.Input other values!(n is negative, dn is positive)"<<endl;
    }

    else if(sin(h)-cos(y)==0){
        cout<<"We cannot divide by 0! Input other values!"<<endl;
    }

    else{
       cout<<"The result is: "<<z<<endl;
    }
    return 0;
}

