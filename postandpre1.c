#include<stdio.h>
void main(){
    int a=10;
    int i=a++ + a++;//10 + 11=21
    printf("a=%d i=%d",a,i);
}