//fabonacci series
#include<stdio.h>
void display(int n){
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    return display(n-1)+display(n-2);
}
void main(){
    int n;
    scanf("%d",&n);
    printf("%d",display(n));
}