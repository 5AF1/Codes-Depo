#include<stdio.h>
#include<math.h>
int main(){
    int n,k,i=0;
    scanf("%d %d",&n,&k);
    int a=ceil((float)n/(float)(2*k+1));
    printf("%d\n",a);
    ///
    if(k==0)
        i=1;
    else if((n%(2*k+1))==0)
        i=k+1;
    else if((n%(2*k+1))<=((int)ceil((float)((2*k+1))/(float)2)))
        i=1;
//    else if(2*k+1>n)
//        i=(n/2)-1;
    else
        i=1+((n%(2*k+1))-((int)ceil((float)((2*k+1))/(float)2)));
    //printf("1+%d-%d\n",(n%(2*k+1)),((int)ceil((float)((2*k+1))/(float)2)));
    ///
    while(i<=n){
        printf("%d ",i);
        i+=(2*k+1);
    }
}
