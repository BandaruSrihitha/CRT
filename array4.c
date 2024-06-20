//min 
#include<stdio.h>
void main()
{
    int a[5],i,n,min,max;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1,min=a[0],max=a[0];i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("min=%d ",min);
    printf("max=%d",max);
}