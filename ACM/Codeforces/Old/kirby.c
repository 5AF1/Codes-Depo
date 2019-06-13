#include<stdio.h>
int main(){
    int s,n,i,j,f=1;
    scanf("%d %d",&s,&n);
    int a[n][2];
    for(i=0;i<n;i++){
        a[i][0]=0;a[i][1]=0;
        int x,y;
        scanf("%d %d",&x,&y);
        for(j=i-1;j>=0;j--){
            if(x>a[j][0] || (y>a[j][1] && x==a[j][0]))
                break;
            else{
                a[j+1][0]=a[j][0];
                a[j+1][1]=a[j][1];
            }
        }
        a[j+1][0]=x;a[j+1][1]=y;
//        printf("\n");
//        for(j=0;j<=i;j++)
//            printf("%d %d\n",a[j][0],a[j][1]);
    }
    for(i=0;i<n;i++){
        if(s>a[i][0])
            s+=a[i][1];
        else
            f=0;
    }
    if(f==0)
        printf("NO");
    else
        printf("YES");
}
