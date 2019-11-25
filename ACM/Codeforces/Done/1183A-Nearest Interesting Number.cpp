#include<bits/stdc++.h>

using namespace std;

int sum(char *n){
    int t=0,l=strlen(n);
    for(int i=0;i<l;i++)
        t=t+(n[i]-48);
    return t;
}

void nextnum(char *n){
    int i=atoi(n);
    i++;
    itoa(i,n,10);
}

int main(){
    char n[5]="0000";
    cin>>n;
    int t = sum(n);
    if(t%4==0)
        cout<<n;
    //nextnum(n);
    //cout<<n;
    else{
        while(t%4!=0){
            nextnum(n);
            t=sum(n);
        }
        cout<<n;
    }
}
