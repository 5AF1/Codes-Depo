#include<bits/stdc++.h>
using namespace std;

int sec(int q){
    int n,ans=INT_MAX;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
        if(i!=0){
            arr[i][0]+=min(arr[i-1][1],arr[i-1][2]);
            arr[i][1]+=min(arr[i-1][0],arr[i-1][2]);
            arr[i][2]+=min(arr[i-1][0],arr[i-1][1]);
        }
    }
    ans=min(arr[n-1][0],min(arr[n-1][1],arr[n-1][2]));
    /*f=ans==arr[0][0] ? 1:(ans==arr[0][1] ? 2 : 3);
    for(int i=1;i<n;i++){
        int t=0;
        if(f==1){
            t=min(arr[i][1],arr[i][2]);
            f=(t==arr[i][1] ? 2 : 3);
        }
        else if(f==2){
            t=min(arr[i][0],arr[i][2]);
            f=(t==arr[i][0] ? 1 : 3);
        }
        else if(f==3){
            t=min(arr[i][0],arr[i][1]);
            f=(t==arr[i][0] ? 1 : 2);
        }
        ans+=t;
    }*/
    //freopen ("1047.txt","a",stdout);
    cout<<"Case "<<q<<": "<<ans<<endl;
    //fclose (stdout);
    return 0;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
        sec(i+1);
    return 0;
}
