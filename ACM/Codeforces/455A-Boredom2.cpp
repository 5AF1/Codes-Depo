#include<bits/stdc++.h>

using namespace std;

unsigned long long arr[100002];
int main(){
    unsigned long n;
    cin>>n;
    for(unsigned long long  i=0;i<n;i++){
        unsigned long long t;
        cin>>t;
        arr[t]+=t;
    }
    for(unsigned long long i=2;i<100002;i++)
        arr[i]=max(arr[i-1],arr[i-2]+arr[i]);
    cout<<arr[100001];
}
