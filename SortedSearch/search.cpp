#include <iostream>
using namespace std;

int sortedSearch(int arr[], int size, int val);

int main(){
    int arr[10] = {1,3,5,7,9,11,13,15,17,19};
    cout<<sortedSearch(arr, 10, 13)<<endl;

    return 0;
}

int sortedSearch(int arr[], int size, int val){
    int low, high, mid;
    int ind;
    bool found;

    low = 0;
    high = size -1;
    found = false;
    while (found == false && low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == val){
            ind = mid;
            found = true;
        }
        else if (val < arr[mid]){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }

    }

    if (found == true){
        return ind;
    }else{
        return -1;
    }
}
