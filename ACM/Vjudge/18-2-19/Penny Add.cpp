#include<iostream>
#include<cstdio>

using namespace std;

int result;

void rec(int curr, int target,int add){
    if(curr> target)
        return;
    else if(curr==target){
        result++;
        return;
    }
    else if(add==1){
        rec(curr+50,target,50);
        rec(curr+25,target,25);
        rec(curr+10,target,10);
        rec(curr+5,target,5);
        rec(curr+1,target,1);
    }
    else if(add==5){
        rec(curr+50,target,50);
        rec(curr+25,target,25);
        rec(curr+10,target,10);
        rec(curr+5,target,5);
    }
    else if(add==10){
        rec(curr+50,target,50);
        rec(curr+25,target,25);
        rec(curr+10,target,10);
    }
    else if(add==25){
        rec(curr+50,target,50);
        rec(curr+25,target,25);
    }
    else if(add==50){
        rec(curr+50,target,50);
    }
}

int fun(int n){
    rec(0,n,1);
}

int main(){
    int n=0;
    while(cin>>n){
        result=0;
        fun(n);
        printf("%d\n",result);
//        if(result==1)
//            printf("There is only %d way to produce %d cents change.\n",1,n);
//        else
//            printf("There are %d ways to produce %d cents change.\n",result,n);
    }
}
