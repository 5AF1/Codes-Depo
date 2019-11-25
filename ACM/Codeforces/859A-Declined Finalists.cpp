#include<bits/stdc++.h>

using namespace std;

int main(){
    /*
    int n,out25=0;
    vector <int> outlist;
    cin>>n;
    outlist.push_back(25);
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp>25) {
            out25++;
            outlist.push_back(temp);
        }
    }
    sort(outlist.begin(),outlist.end());
    if(out25>0){
        for(int i=0;i<outlist.size()-1;i++){
            //cout<<outlist[i]<<'\n';
            //cout<<outlist[i+1]-outlist[i]-1<<'\n';
            out25+=(outlist[i+1]-outlist[i]-1);
        }
    }
    cout<<out25;
    */
    int n,maxi=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(maxi<temp) maxi=temp;
        //if(temp>25) out25++;
    }
    if(maxi<25 && n<25)
        cout<<'0';
    else{
        cout<<(maxi-26+1);
    }
}
