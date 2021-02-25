#include <iostream>
using namespace std;

bool areEven(int arr[], int n);
int main(){
    int arr[4] = {2,34,24,13};
    if(areEven(arr,4)){
        cout<<"All are even"<<endl;
    }else
        cout<<"All are not even"<<endl;
    return 0;

}


bool areEven(int arr[], int n){
    bool res;
    if (n == 1){
        return (arr[0] % 2 == 0);
    }
    else{
        res = areEven(arr,n-1);
        if (res == true){
            return (arr[n-1] % 2 == 0);
            

        }else{
            return false;
        }

    }

}