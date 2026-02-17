#include <stdio.h>
#include <math.h>

int main(){
    float p,r,t;
    float si,ci;

    //input value
    printf("enter principal amount");
    scanf("%f",&p);
    
    printf("enter rate of interest:");
    scanf("%f",&r);

    printf("enter time(in years):");
    scanf("%f",&t);

    //calculate simple interest
    si=(p*r*t)/100;

    //output results
    printf("simple interest=%.2f\n",si);
    printf("compound interest=%.2f\n",ci);

    return 0;

}
