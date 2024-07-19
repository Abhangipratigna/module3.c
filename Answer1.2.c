#include <stdio.h>

void main(){

int number5, number6;

printf("Enter Number 5:");
scanf("%d",&number5);
printf("Enter Number");
scanf("%d",&number6);

int sumResult = number5 + number6;
int subResult = number5 - number6;
int mulResult = number5 * number6;
float divResult = number5 / number6;
int moduloResult = number5 % number6;

printf("summation of %d and %d is : %d",number5,number6,sumResult);
printf("subtraction of %d and %d is : %d",number5,number6,subResult);
printf("multiplication of %d and %d is : %d",number5,number6,mulResult);
printf("division of %d and %d is : %d",number5,number6,divResult);
printf("modulo of %d and %d is : %d",number5,number6,moduloResult);
}
