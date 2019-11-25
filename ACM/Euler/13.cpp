#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("13.txt","r",stdin);
    char num[100][51];
    int nums[52]={0},numc[52]={0},numd[52]={0};
    for(int i=0;i<100;i++){
        cin>>num[i];
    }
    for(int i=0;i<50;i++){
        for(int j=0;j<100;j++){
            nums[i+2]+=(num[j][i]-48);
        }
        //if(i==0) cout<<nums[i];
    }
    for(int i=51;i>=0;i--){
        numd[i]=(nums[i]+numc[i])%10;
        numc[i-1]=(nums[i]+numc[i])/10;
    }
    for(int i=0;i<10;i++)
        cout<<numd[i];
}
