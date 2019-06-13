#include<stdio.h>
int main(){
    char word[101]={};
    int i,j,n;
    gets(word);
    for(i=0;word[i]!=0;i++){
        if(word[i]<97)
            word[i]=word[i]+32;
    }
    for(i=0;word[i]!=0;i++){
        if(word[i]==97 || word[i]==101 || word[i]==105 || word[i]==111 || word[i]==117 || word[i]==121){
            for(j=i;word[j]!=0;j++){
                word[j]=word[j+1];
                //printf("%s\n",word);
            }
        i--;
        }
    //printf("%s\n",word);
    }
    n=i;
    for(i=0;i<n;i++)
        printf(".%c",word[i]);
}
