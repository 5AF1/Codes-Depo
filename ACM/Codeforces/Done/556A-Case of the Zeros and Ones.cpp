#include<bits/stdc++.h>

using namespace std;

int main(){
    stack <char> st;
    string a;
    long long len;
    cin>>len;
    cin>>a;

    for(long i=0;i<len;i++){
        if(!st.empty() && a[i]!=st.top()){
            st.pop();
        }
        else
            st.push(a[i]);
    }
    cout<<st.size();
}
