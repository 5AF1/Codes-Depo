#include<bits/stdc++.h>

using namespace std;

bool check(int n){
    int a1=(n/1000)%10,a2=(n/100)%10,a3=(n/10)%10,a4=n%10;
    if(a1==a2||a1==a3||a1==a4||a2==a3||a2==a4||a3==a4)
        return false;
    return true;
}

int main(){
    int in,l=0;
    cin>>in;
    in++;
    //while(l!=1000){
        while(!check(in))
            in++;
        cout<<in<<endl;
        in++;
      //  l++;
    //}
}
