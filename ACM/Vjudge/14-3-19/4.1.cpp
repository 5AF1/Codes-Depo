
#include<iostream>

using namespace std;

int main(){
    int to;
    cin>>to;
    while(to--){
        int n,d,r;
        cin>>n>>d>>r;
        bool pos[100000];
        for(int i=0;i<n;i++){
            pos[i]=0;
        }
        int dth=0,rth=0,t=0;
        while(1){
            dth=(dth+d)%n;
            rth=(rth+r)%n;
            t++;
            if(pos[dth]!=1) pos[dth]=1;
            else break;
            if(pos[rth]!=1) pos[rth]=1;
            else break;
        }
        cout<<t<<endl;
    }
}
