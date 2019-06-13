#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        double x,y;
        scanf("%lf %lf",&x,&y);
        x/=100;y/=100;
        //printf("%lf %lf",x,y);
        printf("%.2lf%\n",(x*y+(1-x)*(1-y))*100);
    }
}
