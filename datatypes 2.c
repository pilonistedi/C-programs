//c programming data types and variables
#include<stdio.h>
int main(){
    char a;
    char name[5];
    int age;
    float weight;
    double salary;
    
    printf("Enter a character ");
    scanf("%c", &a);
    printf("Enter your name ");
    scanf("%s", &name);
    printf("Enter your age ");
    scanf("%d", &age);
    printf("Enter your weight ");
    scanf("%f", &weight);
    printf("Enter your salary ");
    scanf("%lf", &salary);
    
    printf("\n");
    
    printf("The character is %c \n", a);
    printf("The string is %s \n", name);
    printf("The integer is %d \n", age);
    printf("The float is %.3f \n", weight);
    printf("The double is %.2lf \n", salary);
    
    return 0;
}