#include<stdio.h>
int main()
{
    int number;
    printf("enter the num:");
    scanf("%d",&number);
    if(number>=90){
        printf("Grade A");
    }
    else if(number>=60 && number<90){
        printf("Grade B");
    }
    else{
    printf("grade C");
    }
    return 0;

}