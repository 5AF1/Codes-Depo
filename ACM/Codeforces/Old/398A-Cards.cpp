#include<iostream>
#include<queue>

using namespace std;

int main(){
    long long o,x,mini,ans;
    cin>>o>>x;
    mini=(o<x)?o:x;
    //cout<<mini;
    o-=mini;
    x-=mini;
    ans=o*o-x*x;
    cout<<ans<<"\n";
    for(int i=0;i<mini;i++)
        cout<<"xo";
    for(int i=0;i<o;i++)
        cout<<'o';
    for(int i=0;i<x;i++)
        cout<<'x';
}
