#include<bits/stdc++.h>

using namespace std;

int *a;
map<int,int> m;
vector <int> v;
int f(int n){
    if(n==1)
        return m[1];
    if(n==0)
        return 0;
    if(m[n]==0){
        for(int i=0;v[i]<n;i++)
        return 0;
    }
    return (max(f(n-1),f(n-2)+m[n]*n));
}
int main(){
    int n,ma=0;
    cin>>n;
    a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(m[a[i]]==0) v.push_back(a[i]);
        m[a[i]]++;
        //ma=max(ma,a[i]);
    }
    sort(v.begin(),v.end());
    if(m[3]){}
    for(auto itr=m.begin();itr!=m.end();itr++)
        cout<<itr->first<<' '<<itr->second<<'\n';
    //cout<<f(v.back());
}
