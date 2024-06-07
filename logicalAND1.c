#include<stdio.h>
void main(){
    int a=10;
    int i=0 && (a=20);//If the left-hand side operand is false  the right-hand side operand is not evaluated 
    printf("a=%d i=%d",a,i);
}
