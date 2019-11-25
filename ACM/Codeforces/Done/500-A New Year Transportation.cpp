#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m,p=1;
    bool f=false;
    cin>>n>>m;
    for(int i=1;i<n;i++){
        int mo;
        cin>>mo;
        if(i==p){
            //cout<<p;
            p+=mo;
            //cout<<p<<'\n';
            if(p==m)
                f=true;
        }
    }
    cout<< (f ? "YES" : "NO");
}
