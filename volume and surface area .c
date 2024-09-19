//surface area and volume of a cylinder
#include<stdio.h>
int main(){
    int radius,height,volume,surface_area;
    int pi = 22/7;
    
    printf("Enter the radius ");
    scanf("%d", &radius);
    printf("Enter the height ");
    scanf("%d", &height);
    
    printf("\n");
    
    volume = pi * (radius * radius) * height;
    surface_area = (2 * pi *(radius *radius)) + (2 * pi * radius * height);
    
    printf("The volume of the cylinder is %d \n", volume);
    printf("The surface area of the cylinder os %d \n", surface_area);
    
    return 0;
}