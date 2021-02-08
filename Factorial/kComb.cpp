#include <iostream>
using namespace std;


int factorial(int num);
int kComb(int n, int k);

int main(){
    int n, k, k_comb;
    

    cout<<"Please enter n and k"<<endl;
    cin>>n>>k;
    k_comb = kComb(n,k);
    cout<<n<<" choose "<<k<<" is "<<k_comb<<endl;
    return 0;
    
}

int kComb(int n, int k){
    int nFact, kFact, n_kFact;
    nFact = factorial(n);
    kFact = factorial(k);
    n_kFact = factorial(n - k);

    return (nFact /(kFact * n_kFact));

}

int factorial(int num){
    int fact, i;
    fact = 1;
    for(i = 1; i <= num; i++){
        fact *= i;
    }
    return fact;
}

