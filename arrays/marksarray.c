#include<stdio.h>
int main()
{
    int i;
    int marks[10]={22,33,35,90,85,78,98,45,23,31}; 
    for(i=0;i<=9;i++){
        if(marks[i]<35){
        printf("%d ",i);
    }
    
}
}