#include<bits/stdc++.h>

using namespace std;

int main(){
    char *numa=NULL, *numb=NULL;
    numa=new char[1000000];
    numb=new char[1000000];
    cin>>numa>>numb;
    while(numa[0]=='0')
        numa++;
    while(numb[0]=='0')
        numb++;
    //cout<<strcmp(numa,numb);

    if(strlen(numa)>strlen(numb))
        cout<<'>';
    else if(strlen(numa)<strlen(numb))
        cout<<'<';
    else if(strlen(numa)==0 && strlen(numb)==0 || !strcmp(numa,numb))
        cout<<'=';
    else{
        int n=strlen(numa);
        char f=0;
        for(int i=0;i<n;i++){
            if(numa[i]==numb[i])
                continue;
            else if(numa[i]<numb[i]){
                f=-1;
                break;
            }
            else if(numa[i]>numb[i]){
                f=1;
                break;
            }
        }
        if(f==0) cout<<'=';
        else if (f==-1) cout<<'<';
        else if (f==1) cout<<'>';
    }
}
