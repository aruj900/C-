#include <iostream>
#include <string>

using namespace std;

int main(){
    int hr_24, min_24;
    int hr_12, min_12;
    string period;
    char temp;
    cout<<"Enter time in 24 hr format"<<endl;
    cin>>hr_24>>temp>>min_24;
    min_12 = min_24;
    if(hr_24 >= 0 && hr_24 <= 11){
        period = "am";
        if(hr_24 == 0){
            hr_12 = 12;
        }else{
            hr_12 = hr_24;
        }
    }else{
        period = "pm";
        if(hr_24 == 12){
            hr_12 = 12;
        }else{
            hr_12 = hr_24 - 12;
        }
    }

    cout<<hr_24<<temp<<min_24<<" is "<<hr_12<<temp<<min_12<<" "<<period<<endl;





    return 0;
}