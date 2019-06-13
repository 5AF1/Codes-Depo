#include<stdio.h>
void insertion(unsigned long long int *arr,int l);
int main(){
    int n,i;
    double d;
    unsigned long long int l;
    scanf("%d %I64u",&n,&l);
    unsigned long long int lamp[n+2];
    for(i=0;i<n;i++)
        scanf("%I64u",&lamp[i]);
    lamp[n]=0;
    lamp[n+1]=l;
    insertion(lamp,n+2);
//    for(i=0;i<n+2;i++)
//        printf("%llu ",lamp[i]);
    for(i=1,d=lamp[i]-lamp[i-1];i<n+2;i++){
        if(d<lamp[i]-lamp[i-1]){
            d=lamp[i]-lamp[i-1];
            //printf("%lf ",d);
        }
    }
    d=d/2;
    if(lamp[1]>d)
        d=lamp[1];
    if(lamp[n+1]-lamp[n]>d)
        d=lamp[n+1]-lamp[n];
    printf("%.10lf",d);
}
void insertion(unsigned long long int *arr,int l){
    int i,j,h;
    unsigned long long int a;
    for(i=1;i<l;i++){
        for(a=arr[i],h=i;h>0&&arr[h-1]>a;h--){
            arr[h]=arr[h-1];
        }
        arr[h]=a;
    }
}
