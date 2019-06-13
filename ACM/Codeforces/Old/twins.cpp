#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    int n;
    vector<int> coins;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        coins.push_back(temp);
    }
    sort(coins.begin(),coins.end()/*,greater <>()*/);
    int sum=accumulate(coins.begin(),coins.end(),0);
    int a=0,ans=0;
    while(a<sum || a==sum){
        a+=coins.back();
        sum-=coins.back();
        coins.pop_back();
        ans++;
    }
    cout<<ans;
//    for(int i=0;i<n;i++){
//        cout<<coins[i]<<" ";
//    }
}
