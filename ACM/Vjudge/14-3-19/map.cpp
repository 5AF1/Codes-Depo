#include<map>
#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    map<int,int> m1,m2;
    pair<int,int> p;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ith,jth;
        scanf("%d %d",&ith,&jth);
        //scanf("%d %d",&p.first,&p.second);
        //printf("%d %d\n",p.first,p.second);
        if(m1[ith]==0)
            m1.insert(pair<int,int>(ith,1));
        else m1[ith]++;
        if(m2[jth]==0)
            m2.insert(pair<int,int>(jth,1));
        else m1[jth]++;
    }
    map<int,int>::iterator it;
}


