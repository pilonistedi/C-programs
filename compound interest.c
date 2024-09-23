// Calculating compound intrest
#include<stdio.h>
#include<math.h>
int main(){
    float principle, time, rate, compound_intrest;
    int n;

    printf("Enter the principle amount: ");
    scanf("%f", &principle);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time in years: ");
    scanf("%f", &time);

    compound_intrest = principle * pow((1 + rate/100), time);

    printf("The compound interest is: %.2f", compound_intrest);

    return 0;

}
