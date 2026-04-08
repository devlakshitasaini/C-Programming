#include<stdio.h> 
int add(int a, int b){
    return a+b;
}
int main(){
    int a;
    printf("enter 1 st number :");
    scanf("%d",&a);
    int b;
    printf("enter 2 nd nuber :");
    scanf("%d",&b);
    int sum =add(a,b);
    printf("%d",sum);    

    return 0;
    }
    