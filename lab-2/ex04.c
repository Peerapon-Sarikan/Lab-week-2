#include<stdio.h>
int main()
{
    char name[20];
    int ID;
    float score2;
    float physics2;
    float cal2;
    
    printf("Enter your Name:");
    scanf("%s",name);
    printf("Enter your student ID:");
    scanf("%d",&ID);
    printf("Enter your Programming score:");
    scanf("%f",&score2);
    printf("Enter your Physics score:");
    scanf("%f",&physics2);
    printf("Enter your Calculus score:");
    scanf("%f",&cal2);

    float gpa; gpa = (score2 + physics2 + cal2) / 3;
    printf("Hi %s(%d)! You GPA is %.2f\n", name, ID, gpa);
    return 0;


}