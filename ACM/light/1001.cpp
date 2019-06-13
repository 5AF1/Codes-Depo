#include<iostream>
#include<cstdio>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=10)
            printf("%d %d\n",0,n);
        else
            printf("%d %d\n",10,n-10);
    }
}
