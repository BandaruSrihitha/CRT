#include<stdio.h>
void main(){
    int n,i,flag,m;
    scanf("%d",&m);
    for(n=1;n<=m;n++){
        for(i=2,flag=0;i*i<=n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
        }
        if(flag==0 && (n!=1)){
        printf("%d ",n);
        }
    }
}    