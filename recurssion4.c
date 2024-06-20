//gcd efficient
#include<stdio.h>
int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}
void main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    printf("%d",gcd(n1,n2));
}