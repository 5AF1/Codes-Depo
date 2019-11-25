#include<bits/stdc++.h>
#include<ios>
#include<limits>
using namespace std;

void sec(string a){
    int l=a.length();

    if(l==5){
        if(a[l-5]=='l'&& a[l-4]=='a'&& a[l-3]=='l'&& a[l-2]=='a'&& a[l-1]=='.')
            cout<<"Freda's\n";
        else if(a[0]=='m' && a[1]=='i'&& a[2]=='a'&& a[3]=='o'&& a[4]=='.')
            cout<<"Rainbow's\n";
    }
    else if(a[0]!='m' && a[1]!='i'&& a[2]!='a'&& a[3]!='o'&& a[4]!='.' && a[l-5]=='l'&& a[l-4]=='a'&& a[l-3]=='l'&& a[l-2]=='a'&& a[l-1]=='.' && l>5)
        cout<<"Freda's\n";
    else if(a[0]=='m' && a[1]=='i'&& a[2]=='a'&& a[3]=='o'&& a[4]=='.' && a[l-5]!='l'&& a[l-4]!='a'&& a[l-3]!='l'&& a[l-2]!='a'&& a[l-1]!='.'&&l>5)
        cout<<"Rainbow's\n";
    else
        cout<<"OMG>.< I don't know!\n";
    return;
}


int main(){
    int n;
    cin>>n;
    cin.sync();
    while(n--){
        string a;
        getline(cin,a);
        //cout<<a;
        sec(a);
    }
}
