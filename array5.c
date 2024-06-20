//swap
#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,temp;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    i=0;
    j=n-1;
    while(i<j){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}