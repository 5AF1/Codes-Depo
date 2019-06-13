#include<stdio.h>
#include<math.h>
double lg(double b, double a);
int main(){
    int n;
    float a,s=0.264,l=0.486,p=0.679,r=0.849,h=0.000;
    while(1){
    scanf("%d",&n);
    a=lg(2.0,(((double)n/5)+1));
    n=a;
    a=a-n;
    if(a<=h)
        printf("Howard");
    else if(a<=s)
        printf("Sheldon");
    else if(a<=l)
        printf("Leonard");
    else if(a<=p)
        printf("Penny");
    else if(a<=r)
        printf("Rajesh");
    else
        printf("Howard");
    printf("\n");
    }
}
double lg(double b, double a){
    return ((log10(a))/(log10(b)));
}
