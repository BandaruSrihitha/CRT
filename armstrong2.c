//n armstrong  
#include<stdio.h>
#include<math.h>
int armstrong();
int armstrong(int n){s
    int sum,temp,r,d,p;
    sum=0;
    temp=n;
    d=(int)log10(n)+1;
    while(n!=0){
        r=n%10;
        p=(int)(pow(r,d)+0.5);
        sum=sum+p;
        n=n/10;
    }
    n=temp;
    if(temp==sum)
        return 1;
    else
        return 0;
}
void main(){
    int n,i,count;
    scanf("%d",&n);
    for(i=1,count=1;count<=n;i++){
        if(armstrong(i)){
            printf("%d \n",i);
            count++;
        }
    }
}