#include<stdio.h>
int main(){
    int n,i,d,r,N=0,arr[N];
    scanf("%d",&n);
    /*r=n;
    for(i=1;;i++){
        if(r==0)
            break;
        r=r/10;
        N=i;
    }*/
    for(i=0,r=n;;i++){
        if(r==0)
           break;
        d=r%10;
        arr[i]=d;
        r=r/10;
        N=i+1;
    }
    for(i=0;i<N;i++){
        printf("%d",arr[i]);
    }
}
