#include <iostream>
using namespace std;

void printAscDsc(int start, int end){
    if (start == end){
        cout<<start<<endl;

    }else{
        cout<<start<<endl;
        printAscDsc(start+1, end);
        cout<<start<<endl;
    }
    }


int main(){
    printAscDsc(5,10);
}


