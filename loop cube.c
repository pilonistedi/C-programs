#include<stdio.h>
#include<math.h>

int main(){
    int n,terms,cube;

    printf("Enter the starting term: ");
    scanf("%d", &n);
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    for (int i=n; i < n+terms; i++){
        cube = pow(i,3);
        printf("\nNumber is: %d and the cube of %d is: %d.", i,i,cube);
    }

    printf("\n");

    return 0;
}
