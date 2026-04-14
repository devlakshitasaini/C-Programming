#include<stdio.h>
void namste();
void bonjour();

void namste(){
    printf("namste");
}
void bonjour(){
printf("bonjour");
}
int main(){
    char ch;
    printf("enter F for french & I for india:");
    scanf("%c",&ch);
    if(ch=='I')
    {
      namste();
    }
    else
    {
       bonjour();
    }
     return 0;
}