int main()
{
    int i,n,dmin,dmax;
    scanf("%d %d %d",&n,&dmin,&dmax);
    int e[n];
    for(i=0;i<n;i++){
        scanf("%d",&e[i]);
    }
    for(i=1,dmin=e[0],dmax=e[0];i<n;i++){
        if(dmin>e[i]){
            dmin=e[i];
        }
        if(dmax<e[i])
        {
            dmax=e[i];
        }
    }
    for (i = 0; i < n; i++) {
        if (e[i] >= dmin && e[i] <= dmax) {
            printf("%d ", e[i]);
        }
    }
    printf("\n");

    return 0;
}