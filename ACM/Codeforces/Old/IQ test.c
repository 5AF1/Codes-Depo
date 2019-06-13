#include<stdio.h>///***///
int diff(int *p,int l);
void insertion(int arr[],int l);
int main(){
    int n,i,d,a;
    scanf("%d",&n);
    int li[n];
    for(i=0;i<n;i++){
        scanf("%d",&li[i]);
        if(i==0)
            break;
        else{

        }
    }
    ///
    d=diff(li,n);
    for(i=0;i<n;i++){
        a=li[0]+i*d;
        if(a!=li[i])
            break;
    }
    printf("%d",i+1);
}
int diff(int *p,int l){
    int dif[l-1],c=0,d,i;
    for(i=0;i<l-1;i++){
        dif[i]=p[i+1]-p[i];
        if(dif[i]<0)
            dif[i]=0;
    }
    insertion(dif,l-1);
    for(i=0;i<l-1;i++)
        printf("%d ",dif[i]);
    for(i=0,d=dif[0];i<l-1;i++){
        if(d==dif[i]){
            c++;
        }
        else{
            c=1;
            d=dif[i];
        }
        if(c>1)
            break;
    }
    return d;
}
void insertion(int arr[],int l){
    int a,i,j,h,k;
    for(i=1;i<l;i++){
        for(a=arr[i],h=i;h>0&&arr[h-1]>a;h--){
            arr[h]=arr[h-1];
        }
        arr[h]=a;
    }
    //return arr;
}
