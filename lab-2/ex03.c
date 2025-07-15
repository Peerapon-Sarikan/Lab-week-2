#include<stdio.h>
int main()
{
    int full;
    int weight;
    float number2;
    char name[20];
    char gender[20];
    char edu[20];
    printf("Enter your name:");
    scanf("%s",name);
    printf("Enter your age:");
    scanf("%d",&full);
    printf("Enter your height:");
    scanf("%f",&number2);
    printf("Enter your weight:");
    scanf("%d",&weight);
    printf("Enter your gender:");
    scanf("%s",gender);
    printf("Enter your Education Qualification:");
    scanf("%s",edu);

    printf("Name: %s       Age: %d       Gender: %s\n"
       "Height : %f    Weight : %d\n"
       "Education: %s", 
       name, full, gender, number2, weight, edu);


    return 0;
}