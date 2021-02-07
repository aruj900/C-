#include <iostream>
using namespace std;

int main(){
    int userInput;
    int sumDigits, countDigits; 
    int currDigit;
    int num;
    cout<<"Enter positive integer "<<endl;
    cin>>userInput;
    num = userInput;
    sumDigits = 0;
    countDigits = 0;
    while(num >0){
        currDigit = num % 10;
        countDigits++;
        sumDigits += currDigit;
        num = num / 10;

    }
    cout<<userInput<<" has "<<countDigits<<" digits and the sum of digits is "<<sumDigits<<endl;
    return 0;
}