#include<stdio.h>
void main(){
    int a=10;
    int i=a++ + ++a;//10+12=22,a=12
    printf("a=%d i+%d",a,i);
}