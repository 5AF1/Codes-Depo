#include<stdio.h>
int main(){
    int i,j,min_i,n=10,k;
    int arr[]={1,0,7,5,2,4,6,8,3,9};
    for(i=0;i<n-1;i++){
        min_i=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_i]){
                min_i=j;
            }
        }
/*
        k=arr[i];
        arr[i]=arr[min_i];
        arr[min_i]=k;
*/
        if(min_i!=i){
            arr[i]=arr[i]+arr[min_i];
            arr[min_i]=arr[i]-arr[min_i];
            arr[i]=arr[i]-arr[min_i];
        }
        for(k=0;k<n;k++)
            printf("%d ",arr[k]);
        printf("\n");
    }
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
}
