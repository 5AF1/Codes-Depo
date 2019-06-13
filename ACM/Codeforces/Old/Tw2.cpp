#include<iostream.h>
#include<vector.h>
using namespace std;

int main(){
    int n;
    vector<int> coins;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        coins.push_back(temp);
    }
    coins.sort();
    for(int i=0;i<n;i++){
        cout<<coins[i]<<" ";
    }
}

