#include <iostream>
#include <cmath>
using namespace std;

/* const double PI = 3.14; */
int main(){
    double radius, area;
    cout<<"Please enter the radius of the circle"<<endl;
    cin>>radius;

    area = M_PI * (radius*radius);
    cout<<"Area of circle with radius "<<radius<<" is equal to "<<area;
    return 0;
}
