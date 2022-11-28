#include <iostream> 
#include <cmath>
using namespace std;

int main()
{
    float z1, z2, a;
    
    cout<<"Input the a: ";
    cin>>a;
    
    z1=(sin(2*a)+sin(5*a)-sin(3*a))/(cos(a)-cos(3*a)+cos(5*a));
    z2=tan(3*a);

    
    cout<<"The result of the first formula (z1) is equal to: "<<z1<<endl;
    cout<<"The result of the second formula (z2) is equal to: "<<z2<<endl;

    return 0;
}
