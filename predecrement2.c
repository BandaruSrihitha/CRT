#include<stdio.h>
void main(){
    int a=10;
    int i=--a + --a;//8+8=16,a=8
    printf("a=%d i=%d",a,i);
}