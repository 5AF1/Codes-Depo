#include<bits/stdc++.h>

using namespace std;

int main(){
    int ma=0,mi=10001,te,n,a=0;
    cin>>n;
    cin>>ma;mi=ma;n--;
    while(n--){
        cin>>te;
        if(te>ma){
            a++;
            ma=te;
        }
        else if(te<mi){
            a++;
            mi=te;
        }
    }
    cout<<a;
}
