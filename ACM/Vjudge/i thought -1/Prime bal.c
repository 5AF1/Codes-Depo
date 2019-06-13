#include<stdio.h>
int main(){
    char ch,st[31];
    FILE *fp;
    int l,i;
    gets(st);
    FILE *fp;
    fp=fopen("file1.txt","w");
    fp=fopen("Q2.txt","r");
    while(1){
        ch=fgetc(fp);
        if(ch==EOF){
            break;
        }
        if(ch=='A' || ch=='B'||ch=='C')
            printf("2");
        else if(ch=='D' || ch=='E' ||ch=='F')
            printf("3");
        else if(ch=='G' || ch=='H' ||ch=='I')
            printf("4");
        else if(ch=='J' || ch=='K' ||ch=='L')
            printf("5");
        else if(ch=='M' || ch=='N' ||ch=='O')
            printf("6");
        else if(ch=='P' || ch=='Q' ||ch=='R' ||ch=='S')
            printf("7");
        else if(ch=='T' || ch=='U' ||ch=='V')
            printf("8");
        else if(ch=='W' || ch=='X' ||ch=='Y' ||ch=='Z')
            printf("9");
        else
            printf("%c",ch);
    }
    fclose(fp);
}
