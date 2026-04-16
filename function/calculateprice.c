#include<stdio.h>
void calculateprice(float value)
{
    value=value+(0.18*value);
    printf("float price is:%f",value);
}
int main()
{
float value = 100.0;
calculateprice(value);
return 0; 
}
