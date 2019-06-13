#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,k,c=0;
    cin>>n>>m>>k;
    vector<long long> nums;
    for(int i=0;i<n;i++){
        long long a;
        cin>>a;
        nums.push_back(a);
    }
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(nums[i]>m) break;
        c++;
    }
    c=n-c;
    if(c==0 && nums[n-1]<m) c=1;
    if(c>k) cout<<"NO";
    else cout<<"YES";
}
