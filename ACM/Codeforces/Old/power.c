#include<math.h>
#include<stdio.h>
int main(){
    double a,b;
    double s;
    scanf("%lf %lf",&a,&b);
    s=(double)pow((double)a,(double)b)-pow((double)b,(double)a);
    if(s-(int)s!=0)
        printf("%lf",s);
    else
        printf("%d",(int)s);
}


