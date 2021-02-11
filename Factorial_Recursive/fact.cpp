#include <iostream>
using namespace std;


int factorial(int num);

int main(){
    cout<<factorial(4)<<endl;
    return 0;
}

int factorial(int n){
    if (n == 1){
        return 1;
    }else{
        return factorial(n-1)*n;
    }
}