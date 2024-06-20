//even odd
#include<stdio.h>
void main()
{
    int a[5],n,i,esum,osum;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0,esum=0,osum=0;i<n;i++){
        if(a[i]%2==0){
            esum=esum+a[i];
        }
        else{
            osum=osum+a[i];
        }
    }
    printf("even sum=%d ",esum);
    printf("odd sum=%d",osum);
}