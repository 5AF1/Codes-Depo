#include<bits/stdc++.h>

using namespace std;

int main(){
    /*
    //cout<<(int)'0';
    long long n,c=0,cm=0;
    cin>>n;
    bool sock[n]={0};
    for(int i=0;i<2*n;i++){
        int s;
        cin>>s;
        if(sock[s-1]==1){
            sock[s-1]=0;
            c--;
        }
        else{
            sock[s-1]=1;
            c++;
        }
        if(c>cm) cm=c;
    }
    cout<<cm;
    */
    long n,c=0,cm=0;
    map <int,bool> table;
    cin>>n;
    for(long i=0;i<2*n;i++){
        long temp;
        cin>>temp;
        if(table[temp]){
            table[temp]=false;
            c--;
        }
        else{
            table[temp]=true;
            c++;
        }
        cm = cm>c ? cm : c;
    }
    cout<<cm;
}
