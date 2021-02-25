#include <iostream>
using namespace std;
int c = 45;

int main(){
    // int a, b, c;
    // cout<<"Enter the value of a "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b "<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is  "<<c<<endl;
    // cout<<"The global c is "<<::c<<endl;

    // float d = 34.4;
    // long double e = 34.4;

    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;

    //****************REFERENCE VARIABLES***********************
    float x = 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;


    float d = 45.55;
    cout<<(int)d;
     return 0;


}