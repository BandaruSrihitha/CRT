#include<stdio.h>
void main(){
    int a=10;
    int i=++a + ++a;//12+12=22, a=13
    printf("a=%d i=%d",a,i);
}