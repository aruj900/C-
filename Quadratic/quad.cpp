#include <iostream>
#include <cmath>
using namespace std;
// Constants to represent types of solution to the equation
const int NO_SOLUTION = 0;
const int ONE_REAL_SOLUTION = 1;
const int TWO_REAL_SOLUTIONS = 2;
const int ALL_REALS = 3;
const int NO_REAL_SOLUTION = 4;

int quadratic(double a, double b, double c, double & outX1, double & outX2);
int linear(double a, double b, double & outX);
int main(){
    double a, b, c, x1, x2;
    cout<<"Please enter the cofficents of quadratic equation:"<<endl;
    cin>>a>>b>>c;
    cout<<"The equation: "<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0"<<endl;
    switch (quadratic(a,b,c,x1,x2)){
        case TWO_REAL_SOLUTIONS:
            cout<<"Solutions: "<<x1<<" "<<x2<<endl; break;
        
        case ONE_REAL_SOLUTION:
            cout<<"Solution is : "<<x1<<endl; break;

        case NO_SOLUTION:
            cout<<"No Solution"<<endl; break;

        case ALL_REALS:
            cout<<"All real numbers are solution"<<endl; break;

        case NO_REAL_SOLUTION:
            cout<<"No Real Solution"<<endl; break;


        default:
            cout<<"Error"<<endl; break;
    
    

    }
    return 0;

}
int quadratic(double a, double b, double c, double & outX1, double & outX2){
    double delta, x1, x2;
    if (a != 0.0){
        delta = b*b -
        
         4*a*c;
        if (delta >0){
            x1 = (-b + sqrt(delta))/ (2*a);
            x1 = (-b - sqrt(delta))/ (2*a);
            outX1 = x1;
            outX2 = x2;

            return TWO_REAL_SOLUTIONS;

        }
        else if (delta == 0){
            x1 = -b/(2*a);
            outX1 = x1;
            return ONE_REAL_SOLUTION;
        }
        else
            return NO_REAL_SOLUTION;
    }
    else
        return linear(b,c,outX1);

}

int linear(double a, double b, double & outX){
    double x;
    if (a != 0){
        x = -b/a;
        outX = x;
        return ONE_REAL_SOLUTION;
    }
    else if ((a == 0) && (b == 0)){
        x = 0;
        outX = 0;
        return ALL_REALS;

    }
    else 
        return NO_SOLUTION;
}





