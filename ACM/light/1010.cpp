#include<bits/stdc++.h>
using namespace std;

int main(){
    //ofstream fout;
    int t,c=1;
    cin>>t;
    while(t--){
        int ans=0,m,n;
        cin>>m>>n;
        if(m==1)
            ans=n;
        else if(n==1)
            ans=m;
        else if(m==2 && n%2==1)
            ans=n+1;
        else if(n==2 && m%2==1)
            ans=m+1;
        else if(m==2 && n%2==0 && n%4!=0)
            ans=n+2;
        else if(n==2 && m%2==0 && m%4!=0)
            ans=m+2;
        else
            ans=(int)ceil(((double)m *(double)n)/2);
        cout<<"Case "<<c<<": "<<ans<<"\n";
        /*fout.open("1010.txt",ios_base::app);
        fout<<"Case "<<c<<": "<<ans<<"\n";
        fout.close();*/
        c++;
    }
}
