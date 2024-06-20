#include<stdio.h>
void display(int n){
    if(n==0)
        return;
    display(n/2);
        printf("%d",n%2);
}
void main(){
    int n;
    scanf("%d",&n);
    display(n);
}