#include<stdio.h>
void main(){
    int r,n,m,sum,temp;
    scanf("%d",&m);
    for(n=1;n<=m;n++){
        sum=0;
        temp=n;
        while(n!=0) {
            r=n%10;
            sum=sum*10+r;
            n=n/10;
        } 
        n==temp;
    }
    if(temp==sum){
        printf("%d",temp);
    }
}