#include <iostream>
using namespace std;

int main() {
    int marks[] = {25 ,45 ,23 ,24};
    cout<<marks[3]<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<"Marks "<< i <<" are "<<marks[i]<<endl;
    }

    int* p = marks;
    cout<<"The value at marks "<<*p<<endl;
    cout<<"The value at marks "<<*(p+1)<<endl;


    
}