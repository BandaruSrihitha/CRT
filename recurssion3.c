//gcd
#include<stdio.h>
void main(){
    int n1,n2,min,i,gcd;
    scanf("%d %d",&n1,&n2);
    if(n1<n2)
        min=n1;
    else 
        min=n2;
    for(i=1,gcd=1;i<=min;i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    printf("%d",gcd);
}