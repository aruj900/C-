#include <iostream>
using namespace std;

int main(){
    int days;
    int weeks;
    int remainingDays;

    cout<<"Enter the total days you travelled"<<endl;
    cin>>days;
    weeks = days / 7;
    remainingDays = days % 7;

    cout<<days<<" days are "<<weeks<<" weeks and "<<remainingDays<<"days"<<endl;

    return 0;
}