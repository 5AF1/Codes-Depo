#include<bits/stdc++.h>

using namespace std;

int main(){
    char *str;
    str= new char[200];
    cin>>str;
    while(str[0]=='W' && str[1]=='U' && str[2]=='B')
        str+=3;
    //cout<<str;
    while(strlen(str)!=0){
        if(!(str[0]=='W' && str[1]=='U' && str[2]=='B')){
            cout<<str[0];
            str++;
        }
        else{
            while(str[0]=='W' && str[1]=='U' && str[2]=='B')
            str+=3;
            if(strlen(str)!=0)
                cout<<' ';
        }
    }
}
