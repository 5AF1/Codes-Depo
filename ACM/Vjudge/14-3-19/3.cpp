#include<iostream>
#include<cstdio>
#include<map>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        unsigned long long int ans=0;
        map <unsigned long long int, unsigned long long int> ith,jth;
        cin>>n;
        for(int i=0;i<n;i++){
            unsigned long long int it,jt;
            scanf("%llu %llu",&it,&jt);
            ith[it]++;
            jth[jt]++;
        }
        map<unsigned long long int, unsigned long long int>::iterator t;
        for(t=ith.begin();t!=ith.end();t++){
        //cout<<it->first<<it->second<<endl;
            ans+=ith[t->first]*jth[t->first];
        //cout<<m3[it->first]<<endl;
        }
        cout<<ans<<endl;

    }
    return 0;
}

