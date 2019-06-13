#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        unsigned long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        //cout<<b*log10(a)<<" "<<d*log10(c)<<endl;
        if(b*log10(a)>d*log10(c)) cout<<">"<<endl;
        else cout<<"<"<<endl;
    }
    return 0;
}
