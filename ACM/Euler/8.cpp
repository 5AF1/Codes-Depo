#include<queue>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cstdio>

using namespace std;

long long ma(queue <int> a,int n){
    long long ret=1;
    for(int i=0;i<n;i++){
        ret*=a.front();
        a.pop();
    }
    return ret;
}

int main(){
    int r;
    cin>>r;
    long long m=0;
    queue <int> q;
    freopen("8.txt","r",stdin);
    for(int i=0;i<r;i++){
        char a;
        scanf("%c",&a);
        a-=48;
        q.push(a);
    }
    m=ma(q,r);
    for(int i=0;i<1000-r;i++){
        long long temp;
        q.pop();
        char c;
        scanf("%c",&c);
        c-=48;
        q.push(c);
        temp=ma(q,r);
        if(temp>m) m=temp;
    }
    cout<<m;
}
RIXN7WZUvHgE3Tf4mxDj
