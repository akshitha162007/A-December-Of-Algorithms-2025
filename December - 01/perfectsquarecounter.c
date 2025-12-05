#include<stdio.h>
void perfectsquarecounter()
{ 
    int n,count=0;
    printf("enter the number:");
    scanf("%d",&n);
    
    printf("the perfect square number from 1 to %d is:\n",n);
    for(int i=1;i*i<=n;i++)
    {
        int square=i*i;
        printf("%d ",square);
        count++;
    }
    printf("\nnumber of perfect squares are:%d",count);
}
int main()
{
    perfectsquarecounter();
    return 0;
}