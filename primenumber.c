#include<stdio.h>
void main(){
    int n,i,flag;
    scanf("%d",&n);
    for(i=2,flag=0;i*i<=n;i++){
        if (n%i==0){
            flag=1;
            } 
            if(flag==0 && (n!=1)){
                printf("%d",n);
            }
        }
}