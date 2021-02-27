#include <iostream>
#include <string>
using namespace std;

int main(){
    int a = 3;
    int* b = &a;
    cout<<b<<endl;
    cout<<&a<<endl;
    cout<<"Value at address b is "<<*b<<endl;

    //Pointer to pointer
    int** c = &b;
    cout<<c<<endl;
    cout<<"Value at address c is "<<*c<<endl;
    cout<<"Value at address of adress c is "<<**c<<endl;
    // & is address of operator

    // * is Dereference operator


}