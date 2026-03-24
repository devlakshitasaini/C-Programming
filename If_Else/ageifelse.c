#include<stdio.h>
int main()
{
    int age;
    printf("enter a num:");
    scanf("%d",&age);
    if(age>=18)
    printf("adult");
    else
    printf("Minor");
    return 0;
}