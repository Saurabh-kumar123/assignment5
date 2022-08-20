#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d ",n*2-(i*2-1));
    return 0;
}