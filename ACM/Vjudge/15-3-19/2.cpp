#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        if(a.length()!=b.length()){
            cout<<"No"<<endl;
        }
        else{
            int l=a.length();
            for(int i=0;i<l;i++){
                if(a[i]>96) a[i]-=32;
                if(b[i]>96) b[i]-=32;
                if(a[i]==80) a[i]=66;
                if(a[i]==73) a[i]=69;
                if(b[i]==80) b[i]=66;
                if(b[i]==73) b[i]=69;
            }
            //cout<<a<<" "<<b<<endl;
            if(a.compare(b)==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
}

