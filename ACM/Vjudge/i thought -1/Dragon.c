#include<stdio.h>
void insertion(int arr[][]);
int main(){
    int S,n,i,f=0/*no prob*/;
    scanf("%d %d",&S,&n);
    int s[n][2];
    for(i=0;i<n;i++){
        scanf("%d %d",&s[i][0],&s[i][1]);
    }
    insertion(s[n][2]);
    for(i=0;i<n;i++){
        if(s[i][0]>S){
            f=1;
            break;
        }
        else{
            S+=s[i][1];
        }
    }
    if(f==1)
        printf("NO");
    else
        printf("YES");
}
void insertion(int arr[][]){
    int a,A,i,j,h;
    for(i=1;i<2;i++){
        for(a=arr[i][0],A=arr[i][1],h=i;h>0&&arr[h-1][0]>a;h--){
            arr[h][0]=arr[h-1][0];
            arr[h][1]=arr[h-1][1];
        }
        arr[h][0]=a;
        arr[h][1]=A;
    }
}
