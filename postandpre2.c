#include<stdio.h>
void main(){
    int a=10;
    int i=++a + a++;//12+11=23,a=12
    printf("a=%d i=%d",a,i);
}