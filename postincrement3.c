#include<stdio.h>
void main(){
    int a=10;
    int i=a++ + a++ + a++;//10+11+12=33,a=13
    printf("a=%d i=%d",a,i);
}