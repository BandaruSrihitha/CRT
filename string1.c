#include<stdio.h>
int main(){
    char ch[20];
    int i,len,j,temp;
    gets(ch);
    for(i=0;ch[i]='\0';i++);
    len=i;
        i=0;
        j=len-1;
    while(i<j){
        temp=ch[i];
        ch[i]=ch[j];
        ch[j]=temp;
        i++;
        j--;
    }
    printf("%s",ch);
    return 0;
}
