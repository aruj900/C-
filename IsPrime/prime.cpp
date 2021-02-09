#include <iostream>

using namespace std;

bool isPrime(int num);
int main(){
    int n;
    bool res;
    cout<<"Please enter a positive integer: "<<endl;
    cin>>n;
    res = isPrime(n);
    cout<<res<<endl;

    return 0;
}
bool isPrime(int num){
    int count;
    count = 0;
    for (int i = 1; i <= num/2; i++){
        if(num % i == 0){
            count++;
        }
    }
    if(count == 1){
        return true;
    }
    else{
        return false;
    }
}