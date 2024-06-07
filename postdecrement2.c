#include<stdio.h>
void main(){
    int a=10;
    int i=a-- + a--;//10+9=19,a=8
    printf("a=%d i=%d",a,i);
}