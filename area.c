//getting the area of a rectangle
/*
Maxwell josali
BCS-05-0093/2024
*/

#include<stdio.h>
int main(){
    int l, w, area;
    
    printf("Enter the length ");
    scanf("%d", &l);
    
    printf("Enter the width ");
    scanf("%d", &w);
    
    area = l * w;
    printf("The area of the rectangle is %d", area);
    
    return 0;
    
}
