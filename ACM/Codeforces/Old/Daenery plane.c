#include<stdio.h>
int main(){
    int n,k,i,c=0,a;
    scanf("%d %d",&n,&k);
    n=n*8;
    for(i=0;i<k;i++){
        scanf("%d",&a);
        if(a%2!=0)
            a++;
        c+=a;
        //printf("%d",c);
    }
    if(c>n)
        printf("NO");
    else
        printf("YES");
}
