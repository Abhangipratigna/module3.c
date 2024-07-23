//#inculde <stdio.h>

void main(){
int main()

{ float Basic, HRA,DA,GROSS_salary;

printf("\n please Enter the basic salary of an Employee:");
scanf("%f", &Basic);

if (Basic <= 10000)

{ HRA = (Basic *8)/ 100;
  DA = (Basic *10)/100;
  }
else if (Basic <=20000)
{
HRA = (Basic * 16)/100;
 DA =(Basic * 20)/100;
}
else
{
 HRA = (Basic * 24)/100;
 DA = (Basic * 30)/100;
}
Gross_salary = Basic + HRA + DA;
printf("\n GROSS salary of this Employee = %.2f", GROSS salary);

return 0;
}

}
