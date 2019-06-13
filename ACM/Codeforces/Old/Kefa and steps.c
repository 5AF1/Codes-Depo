#include<stdio.h>
int main(){
    int n,i,c=0,m=0,b;
    scanf("%d",&n);
    int a[n];
    ///
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    ///
    for(i=0,b=a[0];i<n;i++){
        if(b<=a[i]){
            c++;
            b=a[i];
            //printf("*");
        }
        else{
            b=a[i];
            i--;
            if(c>m)
                m=c;
            c=0;
            //printf(" ");
        }
    }
    if(c>m)
        m=c;
    printf("%d",m);
}
