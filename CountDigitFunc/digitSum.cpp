#include <iostream>
using namespace std;

int analyzeDigits(int num, int & sumDig);
int main(){
    int num, countDig, sumDig;
    cout<<"Please enter a positive Integer"<<endl;
    cin>>num;
    countDig = analyzeDigits(num, sumDig);

    cout<<num<<" has "<<countDig<<" digits and the sum of digits is "<<sumDig<<endl;
    return 0;

}

int analyzeDigits(int num, int & sumDig){
    int count;
    int sum;
    int currDig;

    count = 0;
    sum = 0;
    while(num > 0){
        currDig = num % 10;
        count++;
        sum += currDig;
        num = num / 10;

    }
    sumDig = sum;
    return count;


}