#include<stdio.h>
int mod(int a,int b){
    b=a-b;
    if(b<0)
        b=(-1)*b;
    return b;
}
int main(){
    int n,m,i,h,c=0;
    scanf("%d %d",&n,&m);
    int puz[m];
    for(i=0;i<m;i++)
        scanf("%d",&puz[i]);
    for(i=0;i<m;i++){
        for(h=m,c=mod(puz[i],puz[h]);h>i;h--){
            if(mod(puz[i],puz[h])<c){
                c=mod(puz[i],puz[h]);
                //printf("%d\n",a);
            }
        }
        printf("%d ",c);
    }
    //printf("%d",c);
    /*for(i=1;i<m;i++){
        for(h=i,a=puz[i];h>0&&puz[h-1]>a;h--)
            puz[h]=puz[h-1];
        puz[h]=a;
    }*/
    /*for(i=0;i<m;i++)
        printf("%d",puz[i]);*/
}
