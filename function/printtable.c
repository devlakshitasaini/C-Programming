#include<stdio.h>
void printtable(int n){
    for(int i=1;i<=10;i++){
    printf("%d\n",i*n);
    }
}
int main(){
int n;
printf("enter a no:");
scanf("%d",&n);
printtable(n);
return 0;
}



