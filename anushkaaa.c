#include<stdio.h>
void main()
{
    int a,rem=0,sum=0,n;
    printf("enter the number");
    scanf("%d",&a);
    while(a>0)
    {
        n=a%10;
        sum=sum+(n*n);
        a=a/10;
        
    }
    printf("sum=%d",sum);
    
}
