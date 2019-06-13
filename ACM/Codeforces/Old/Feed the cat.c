#include<stdio.h>
int main(){
    int h,m,H,D,C,N,t=0,H1;
    double c,d;
    scanf("%d %d",&h,&m);
    scanf("%d %d %d %d",&H,&D,&C,&N);
    if(h<20)
        t=(19-h)*60+(60-m);
    H1=H+(t*D);
    c=(double)(C*H1*80)/(double)(100*N);
    d=((H/N*1.0));
    if(c<d)
        printf("%.4lf",c);
    else
        printf("%.0lf",d);
    return 0;
}
