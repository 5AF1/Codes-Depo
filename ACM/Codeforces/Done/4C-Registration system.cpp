#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    map <string, int> ma;
    string username;
    cin>>n;
    while(n--){
        cin>>username;
        if(ma[username]==0){
            cout<<"OK\n";
            ma[username]++;
        }
        else{
            cout<<username<<ma[username]<<'\n';
            ma[username]++;
        }
    }
}
