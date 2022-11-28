#include <iostream> 
#include <cmath>
using namespace std;

int main()
{
    const float x =1.7;
    float t,a,b,y,y1;

    cout<<"Input the t:";
    cin>>t;

    a=log10(x);
    b=sqrt(pow(x,2)+pow(t,2));
   
    y1=fabs(a-b);
    y=pow(y1,1/3);

    cout<<"The first result (a) is equal to "<<a<<endl;
    cout<<"The second result (b) is equal to "<<b<<endl;
    cout<<"The result of the function (y) is equal to "<<y<<endl;

    return 0;
}
