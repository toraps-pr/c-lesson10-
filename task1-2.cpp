#include <iostream> 
using namespace std;

int main()
{ 
    double x,y;
    cout<<"Type first period of time(hours):";
    cin>>x;
    cout<<"If you was consuming exactly or less than 250 kilowatts of electricity per hour, the price is:"<<x*1.44<<"\n";
    cout<<"If you was consuming exactly or more than 251 kilowatts of electricity per hour,the price is:"<<1.68*x<<"\n\n";
    


    cout<<"Type second period of time:";
    cin>>y;
    cout<<"If you was consuming exactly or less than 250 kilowatts of electricity per hour, the price is:"<<y*1.44<<"\n";
    cout<<"If you was consuming exactly or more than 251 kilowatts of electricity per hour, the price is:"<<1.68*y<<"\n";

return 0;
}
