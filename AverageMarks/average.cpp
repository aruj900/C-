#include <iostream>
using namespace std;

int main(){
    int totalStudents;
    int count;
    int curr, sum;
    double avg;
    cout<<"Enter the total number of students"<<endl;
    cin>>totalStudents;

    cout<<"Enter the marks of each student separated by space"<<endl;

    sum = 0;
    for(count = 1; count <= totalStudents; count++){
        cin>>curr;
        sum += curr;

    }
    avg = (double)sum/(double)totalStudents;
    cout<<"Average is "<<avg<<endl;


    return 0;
}