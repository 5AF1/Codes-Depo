#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,gcd=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            sum+=temp;
            gcd=__gcd(temp,gcd);
        }
        cout<<gcd<<" "<<(sum/gcd)<<endl;
    }
}
