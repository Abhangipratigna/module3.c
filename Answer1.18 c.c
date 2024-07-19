#include<stdio.h>

int main()
{
    float basic, bonus, gross;
    printf("Enter person's Annual salary : ");
    scanf("%f", &basic);

    bonus = (basic*20)/100;
    gross = bonus + basic;
    printf("\nBonus = %0.2f", bonus);

    printf("\nGross = %0.2f", gross);
    getch();

    return 0;
}
