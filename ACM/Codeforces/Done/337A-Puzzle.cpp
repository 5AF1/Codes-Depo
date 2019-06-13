#include<bits/stdc++.h>

using namespace std;

int main(){
    long n,m,temp;
    vector <int> f,anss;
    cin>>n>>m;
    for(long i=0;i<m;i++){
        cin>>temp;
        f.push_back(temp);
    }
    sort(f.begin(),f.end()/*,greater<int>()*/);

    //cout<<f[n-1]-f[0];
    //cout<<f[n-1]<<'-'<<f[0]<<'='<<f[n-1]-f[0];

    for(int i=0;n-1+i<m;i++){
        temp=f[n-1+i]-f[i];
        anss.push_back(temp);
    }
    sort(anss.begin(),anss.end()/*,greater<int>()*/);
    cout<<anss[0];
}
