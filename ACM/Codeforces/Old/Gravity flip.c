#include<stdio.h>
int main(){
    int i,j,a,h,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    ///
    for(i=1;i<10;i++){
        for(a=arr[i],h=i;h>0&&arr[h-1]>a;h--){
            arr[h]=arr[h-1];
        }
        arr[h]=a;
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
