//wap to all the even numbers from 1 to n by using continue statment
#include<stdio.h>
int main()
{
    int n;
printf("enter a number:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
if(i%2!=0)
{
    continue;
}
printf("%d ",i);
}
return 0;
}
