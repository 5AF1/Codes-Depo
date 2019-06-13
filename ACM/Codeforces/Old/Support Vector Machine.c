#include<stdio.h>
#include<math.h>
int main(){
    int i=0,j=0;
    double D,V,Pi=3.1416;
    double a[100];
    do{
        scanf("%lf %lf",&D,&V);
        a[i]=cbrt(((D*D*D)-((6*V)/Pi)));
        i++;
    }while(D!=0 && V!=0);
    for(j=0;j<i-1;j++){
        printf("%.3lf\n",a[j]);
    }
}
