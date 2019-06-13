#include<iostream>

using namespace std;

int main(){
    long int t;
    cin>>t;
    while(t--){
        long int n,f,ini=1500;
        cin>>n>>f;
        while(n--){
            long int temp;
            cin>>temp;
            ini+=temp;
        }
        if(ini==f) cout<<"Correct"<<endl;
        else cout<<"Bug"<<endl;
    }
}
