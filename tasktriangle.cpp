#include <iostream> 
#include <cmath>
using namespace std;

int main()
{
    float ax=0, ay=0, bx=4, by=3, cx=-4, cy=5, side1, side2, side3, hp, area;
    
    side1=sqrt(pow(ax-bx,2)+pow(ay-by,2));
    side2=sqrt(pow(ax-cx,2)+pow(ay-cy,2));
    side3=sqrt(pow(bx-cx,2)+pow(by-cy,2));
    
    hp=(side1+side2+side3)/2;
    area=sqrt(hp*(hp-side1)*(hp-side2)*(hp-side3));


    cout<<"The height (of side2) of the triangle is equal to "<<2*area/side2<<endl;
    cout<<"The bisector (of side3) of the triangle is equal to "
    <<sqrt(side1*side2*(side1+side2+side3)*(side1+side2-side3))/side1+side2<<endl;
    
    return 0;
}
