#include<stdio.h>
int main()
{
    char fullname[50];
    char firstname [20];
    int full;
    float number2;
    char uni[20];

    printf("Enter your full name:");
    scanf("%s",fullname);
    printf("Enter your age:");
    scanf("%d",&full);
    printf("Enter your height:");
    scanf("%f",&number2);
    printf("Enter your University name:");
    scanf("%s",uni);

    printf("Hi! Everyone. This is K.%s from %s. I am %d years old and my height is %f cm tall.", fullname, uni, full, number2);
    return 0;
}