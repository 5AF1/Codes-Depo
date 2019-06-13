#include<stdio.h>
void change(char **p,char i,char j);
char shift(char a);
int main(){
    char cur[3][3], inp[3][3];
    char i,j;
    for(i=0;i<3;i++){
        scanf("%d %d %d",&inp[i][0],&inp[i][1],&inp[i][2]);
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cur[i][j]=1;
            if(inp[i][j]%2==0)
                inp[i][j]=0;
            else
                inp[i][j]=1;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(inp[i][j]==1)
                change(cur,i,j);
        }
    }
    for(i=0;i<3;i++){
        printf("%d%d%d\n",cur[i][0],cur[i][1],cur[i][2]);
    }
}
void change(char **p,char i,char j){
    p[i][j]=shift(p[i][j]);
    if(j==0){
        p[i][j+1]=shift(p[i][j+1]);
    }
    else if(j==2){
        p[i][j-1]=shift(p[i][j-1]);
    }
    else{
        p[i][j+1]=shift(p[i][j+1]);
        p[i][j-1]=shift(p[i][j-1]);
    }
     if(i==0){
        p[i+1][j]=shift(p[i+1][j]);
    }
    else if(i==2){
        p[i-1][j]=shift(p[i-1][j]);
    }
    else{
        p[i+1][j]=shift(p[i+1][j]);
        p[i-1][j]=shift(p[i-1][j]);
    }
}
char shift(char a){
    if(a==0)
        return 1;
    else if(a==1)
        return 0;
}
