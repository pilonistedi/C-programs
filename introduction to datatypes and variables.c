//c programming data types and variables
#include<stdio.h>
int main(){
    //declaration and initialisation
    char a = 'K';
    char name[] = "Keith";
    int age = 10;
    float weight = 56.2;
    double salary = 2000;
    
    printf("The character is %c character \n", a);
    printf("The string is %s string \n", name);
    printf("The integer is %d integer \n", age);
    printf("The float is %.3f float \n", weight);
    printf("The double is %.2lf double \n", salary);
    
    return 0;
}