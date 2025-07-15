#include<stdio.h>
int main()
{
    int full;
    float number2;
    char name [20];
    printf("Please enter an integer value:");
    scanf("%d",&full);
    printf("You entered %d",full);
    printf("\nPlease enter a float value:");
    scanf("%f",&number2);
    printf("You entered %.2f",number2);
    printf("\n Please enter a character:");
    scanf("%s",name);
    printf("You entered %s",name);
    return 0;

}