#include<iostream>

using namespace std;

int arr[20][20];

int main(){
    int m=0;
    freopen("11.txt","r",stdin);
    for(int y=0;y<20;y++){
        for(int x=0;x<20;x++){
            cin>>arr[x][y];
        }
    }
    for(int j=0;j<17;j++){
        for(int i=0;i<17;i++){
            if(arr[i][j]*arr[i+1][j]*arr[i+2][j]*arr[i+3][j]>m) m=arr[i][j]*arr[i+1][j]*arr[i+2][j]*arr[i+3][j];
            if(arr[i][j]*arr[i][j+1]*arr[i][j+2]*arr[i][j+3]>m) m=arr[i][j]*arr[i][j+1]*arr[i][j+2]*arr[i][j+3];
            if(arr[i][j]*arr[i+1][j+1]*arr[i+2][j+2]*arr[i+3][j+3]>m) m=arr[i][j]*arr[i+1][j+1]*arr[i+2][j+2]*arr[i+3][j+3];
            if(arr[i][j+3]*arr[i+1][j+2]*arr[i+2][j+1]*arr[i+3][j]>m) m=arr[i][j+3]*arr[i+1][j+2]*arr[i+2][j+1]*arr[i+3][j];
        }
    }
    cout<<m;
}
