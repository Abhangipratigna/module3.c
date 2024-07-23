//#inculde <stdio.h>

void main(){

float sum(int);
float average(int);

int main(void){

average(5);
return 0;
}
float sum (int n)
{
int c;
float num, s= 0.0;
for(c = 1; c <= n; c++)
{
printf("Next number:");
scanf("%f",&num);
s + = num;
}
printf("Sum is %5.2f\n", s);
return s;
}
float average(int n)
{
float avg;
avg - sum(n) /n;
printf("Average is %5.2f\n", avg);

return avg;}

}
