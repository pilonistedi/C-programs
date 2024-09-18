//calculating simple intrest
/*
Maxwell Josali
BCS-05-0093/2024
*/
#include<stdio.h>
int main(){
    int principle_amount,time,rate,simple_intrest;

    printf("Enter the principle amount ");
    scanf("%d", &principle_amount);
    
    printf("Enter the time ");
    scanf("%d", &time);
    
    printf("Enter the rate ");
    scanf("%d", &rate);
    
    simple_intrest = (principle_amount * time * rate) / 100;
    
    printf("\n");
    
    printf("The simple intrest is %d", simple_intrest);
}