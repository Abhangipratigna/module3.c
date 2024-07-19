//#incide <stdio.h>

void main(){
int months, days;
printf("Enter the number of days:\n");
scanf("%d",&days);
months=days/30;
days=days&30;
printf("Months=%d \n days=%d", months ,days);

}
