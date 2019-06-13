#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int b=0,k=0,l=0,n;
        cin>>n;
        while(n--){
            string command;
            cin>>command;
            if(command[0]=='b'||command[0]=='B') b++;
            if(command[0]=='k'||command[0]=='K') k++;
            if(command[0]=='l'||command[0]=='L') l++;
        }
        b=b/2;
        cout<<min(b,min(k,l))<<endl;
    }
}
