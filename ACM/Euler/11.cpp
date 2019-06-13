#include<iostream>
#include<cstdio>

using namespace std;

int arr[20][20];

int main(){
    int MAX[7]; ///xy 1234 m
    MAX[6]=0;
    freopen("11.txt","r",stdin);
    for(int y=0;y<20;y++){
        for(int x=0;x<20;x++){
            cin>>arr[x][y];
        }
    }
    for(int y=0;y<20;y++){
        for(int x=0;x<=16;x++){
            int temp=arr[x][y]*arr[x+1][y]*arr[x+2][y]*arr[x+3][y];
            if(temp>MAX[6]){
                MAX[0]=x;
                MAX[1]=y;
                MAX[2]=arr[x][y];
                MAX[3]=arr[x+1][y];
                MAX[4]=arr[x+2][y];
                MAX[5]=arr[x+3][y];
                MAX[6]=temp;
                cout<<MAX[0]<<" "<<MAX[1]<<" "<<MAX[2]<<" "<<MAX[3]<<" "<<MAX[4]<<" "<<MAX[5]<<" "<<MAX[6]<<" "<<endl;
            }
        }
    }
    for(int x=0;x<20;x++){
        for(int y=0;y<=16;y++){
            int temp=arr[x][y]*arr[x][y+1]*arr[x][y+2]*arr[x][y+3];
            if(temp>MAX[6]){
                MAX[0]=x;
                MAX[1]=y;
                MAX[2]=arr[x][y];
                MAX[3]=arr[x][y+1];
                MAX[4]=arr[x][y+2];
                MAX[5]=arr[x][y+3];
                MAX[6]=temp;
                cout<<MAX[0]<<" "<<MAX[1]<<" "<<MAX[2]<<" "<<MAX[3]<<" "<<MAX[4]<<" "<<MAX[5]<<" "<<MAX[6]<<" "<<endl;
            }
        }
    }
}
