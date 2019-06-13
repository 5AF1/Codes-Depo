#include<iostream>

using namespace std;

int main(){
    long long n=100;
    /// ((n*(n+1)/2)**2) - (n*(n+1)*(2*n+1)/6)==
    cout << ((3*n*(n*n*n-n))+(2*n*(n*n-1)))/12;
}
