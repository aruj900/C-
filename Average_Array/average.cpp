#include <iostream>
using namespace std;
const int MAX_CLASS_SIZE = 60;
int main(){
    int numberOfStudents;
    int gradesList[MAX_CLASS_SIZE];
    int currGrade;
    int ind, sum;
    double avg;
    cout<<"Please enter the number of students is class (no more than "<<MAX_CLASS_SIZE<<")"<<endl;
    cin>>numberOfStudents;

    // reading the grades
    for(ind = 0; ind < numberOfStudents ; ind++){
        cout<<"Please enter the grades separated by space "<<endl;
        cin>>currGrade;
        gradesList[ind] = currGrade;
    }
    //Calculating the avg
    sum = 0;
    for (ind = 0; ind < numberOfStudents; ind++){
        sum += gradesList[ind];
        
    

    }
    avg = (double)sum/(double)numberOfStudents;
    cout<<"Average of the class is "<<avg<<endl;
    //Grades above the average
    cout<<"Grades above the average are: "<<endl;
    for (ind = 0; ind < numberOfStudents; ind++){
        if (gradesList[ind] > avg){
            cout<<gradesList[ind]<<" ";
        }
    }
    cout<<endl;
    return 0;
}