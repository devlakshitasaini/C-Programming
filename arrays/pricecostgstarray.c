#include<stdio.h>
int main()
{
    float p[3];
    printf("enter 3 prices :");
    scanf("%f",&p[0]);
    scanf("%f",&p[1]);
    scanf("%f",&p[2]); 

    printf("total p1:%f\n",p[0]+(0.18*p[0])); //gst*price gst = 0.18 
    printf("total p2:%f\n",p[1]+(0.18*p[1]));
    printf("total p3:%f\n",p[2]+(0.18*p[2])); 
    return 0;

}

