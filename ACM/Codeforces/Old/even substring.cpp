#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,c=0;
    string num;
    cin>>n;
    cin>>num;
    for(int i=0;i<n;i++)
        if(num[i]%2==0)
            c+=(i+1);
    cout<<c;
}
