#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	cout<<"Yes";
    long long n,c=0,cm=0;
    cin>>n;
    bool sock[n]={0};
    for(int i=0;i<2*n;i++){
        char s;
        cin>>s;
        if(sock[s-48]==1){
            sock[s-48]=0;
            c--;
        }
        else{
            sock[s-48]=1;
            c++;
        }
        cout<<c<<' '<<cm<<endl;
        if(c>cm){
            cm=c;

        }
    }
    cout<<cm;
}
