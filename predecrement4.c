#include<stdio.h>
void main(){
    int a=10;
    int i=--a + --a + --a;//8+8+7=23,a=7
    printf("a=%d i=%d",a,i);
}