//max 
#include<stdio.h>
void main()
{
    int a[5],i,n,max;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1,max=a[0];i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("%d",max);
}