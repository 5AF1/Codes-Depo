#include<map>
#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    map<int,int> m1,m2,m3;
    pair<int,int> p;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ith,jth;
        scanf("%d %d",&ith,&jth);
        //scanf("%d %d",&p.first,&p.second);
        //printf("%d %d\n",p.first,p.second);
        m1[ith]++;
        m2[jth]++;
    }
    map<int,int>::iterator it;
    for(it=m1.begin();it!=m1.end();it++){
        //cout<<it->first<<it->second<<endl;
        m3[it->first]=m1[it->first]*m2[it->first];
        cout<<m3[it->first]<<endl;
    }
}


