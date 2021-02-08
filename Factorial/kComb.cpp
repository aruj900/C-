#include <iostream>
using namespace std;

int factorial(int num){
    int fact, i;
    fact = 1;
    for(i = 1; i <= num; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n, k, k_comb;
    int nFact, kFact, n_kFact;

    cout<<"Please enter n and k"<<endl;
    cin>>n>>k;

    nFact = factorial(n);
    kFact = factorial(k);
    n_kFact = factorial(n - k);

    k_comb = nFact /(kFact * n_kFact);
    cout<<n<<" choose "<<k<<" is "<<k_comb<<endl;
    return 0;
    
}

