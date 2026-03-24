#include<stdio.h>
int main(){
    int number;
    printf("Enter your Number :");
    scanf("%d",&number);
    if(number%2==0)
    printf("even");
    else {
        printf("Odd");
    }
    return 0;
}
