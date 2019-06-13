#include<iostream>
#include<queue>
using namespace std;

bool palcheck(long long num){
    deque <int> dq;
    while(num!=0){
        dq.push_back(num%10);
        num=num/10;
    }
    while(dq.size()!=0&&dq.size()!=1){
        if(dq.front() != dq.back())
            return false;
        else{
            dq.pop_back();
            dq.pop_front();
        }
        //cout<<dq.size()<<" ";
    }
    return true;
}



int main(){
    long long num=0,maxnum=0;
    for(int i=100;i<=999;i++){
        for(int j=100;j<=999;j++){
            num=i*j;
            if(palcheck(num)){
                cout<<i<<'*'<<j<<'='<<num<<endl;
                if(num>maxnum)
                    maxnum=num;
            }
            //else
                //cout<<"*"<<endl;
        }
    }
            cout<<"***"<<maxnum<<"****";
}
