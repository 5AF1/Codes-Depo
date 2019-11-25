#include<bits/stdc++.h>

using namespace std;

#define ull unsigned long long

ull chainCount(ull n){
    ull c=1;
    //cout<<n<<"->";
    while(n!=1){
        if(n%2==0){
            n=n/2;
            //cout<<n;
            c++;
        }
        else {
            //cout<<(3*n+1)<<"->";
            n=(3*n+1)/2;
            //cout<<n;
            c+=2;
        }
        //if(n!=1) cout<<"->";
    }
    //cout<<"\n\n";
    return c;
}

int main(){
    ull n=1000000000,temp;
    pair <ull, ull> MAX;
    MAX.first=0;
    MAX.second=0;
    for(ull i=1;i<=n;i++){
        temp=chainCount(i);
        if(MAX.second<temp){
            MAX.first=i;
            MAX.second=temp;
    cout<<MAX.first<<' '<<MAX.second<<'\n';
        }
    }
}
