#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,i=1;
    cin>>t;
    while(t--){
        unsigned long long a,x=0,y=0,layer=0,mid;
        cin>>a;
        layer=(unsigned long long)ceil(sqrt((double)a));
        mid=layer*layer-layer+1;
        if(a<=mid){
            x=layer;
            y=layer-(mid-a);
        }
        else{
            y=layer;
            x=layer-(a-mid);
        }
        if(layer%2==0)
            swap(x,y);
        cout<<"Case "<<i<<": "<<x<<" "<<y<<"\n";
        i++;
    }
}
