#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int r,c,i;
        cin>>r>>c>>i;
        char can[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                can[i][j]='.';
            }
        }
        while(i--){
            int r1,c1,r2,c2;
            char ch;
            cin>>r1>>c1>>r2>>c2>>ch;
            for(int i=r1-1;i<r2;i++){
                for(int j=c1-1;j<c2;j++){
                    can[i][j]=ch;
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<can[i][j]<<" ";
            }
            cout<<endl;
        }

    }
}
