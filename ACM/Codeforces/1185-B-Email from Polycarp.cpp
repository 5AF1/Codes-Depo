#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
//        char *w1,*w2;
//        w1=new char[1000000];
//        w2=new char[1000000];
        map <char,int> ws1,ws2;
        set <char> wm;
        queue <char> wq1,wq2;
        string w1,w2;
        cin>>w1>>w2;

        for(int i=0;i<w1.length();i++){
            ws1[w1[i]]++;
            wm.insert(w1[i]);
            if(wq1.empty() || wq1.back()!=w1[i])
                wq1.push(w1[i]);
        }
        for(int i=0;i<w2.length();i++){
            ws2[w2[i]]++;
            if(wq2.empty() || wq2.back()!=w2[i])
                wq2.push(w2[i]);
        }
        if(wq1.size()!=wq2.size()){
            cout<<"NO\n";
            continue;
        }
        while(!wq1.empty()){
            if(wq1.front()!=wq2.front()){
                break;
            }
            else{
                wq1.pop();
                wq2.pop();
            }
        }
        if(!wq1.empty()){
            cout<<"NO\n";
            continue;
        }
        bool f=true;
        set<char> :: iterator it;
        for( it = wm.begin(); it != wm.end(); it++ ){
            //cout<<*it;
            if(ws1[*it]>ws2[*it]){
                f=false;
                //cout<<*it<<"BBBBBBBBBBBBBBBBBB"<<ws1[*it]<<ws2[*it]<<'\n';
            }
        }
        if(f==false)
            cout<<"NO\n";
        else
            cout<<"YES\n";

//        for(int i=0;;){
//            int c=0;
//            char temp=w1[0];
//            while(w1[0]==temp){
//                c++;
//                w1++;
//            }}

    }
}
