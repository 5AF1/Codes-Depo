#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

long long __lcm(long long a,long long b){
    return (a*b)/( __gcd(a,b));
}
long long __lcm(vector<long long> a){
    while(a.size()!=1){
        long long t1,t2,t3;
        t1=a.back();a.pop_back();
        t2=a.back();a.pop_back();
        t3=__lcm(t1,t2);
        cout<<"lcm("<<t1<<" "<<t2<<")= "<<t3<<"\n";
        a.push_back(t3);
    }
    return a.back();
}

int rec(int a){
    if(a==1)
        return 1;
    else
        return __lcm(rec(a-1),a);
}


int main(){
    //vector<long long> a;
    //for(int i=0;i<20;i++)
      //  a.push_back(i+1);
    //long long ans=__lcm(a);
    //cout<<ans<<"\n";
    int an=rec(20);
    cout<<an;
}
