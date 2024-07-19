#include <stdio.h>

int main(){

float height;

printf("Enter the height in centimeters:");
scanf("%d",&height);

if(height<150.0)
{
    printf("Dwarf \n");
}
else if((height>150.0)&&(height<=165.0))
{
    printf("Average height \n");
}
else if ((height>165.0)&&(height<=195.0))
{
    printf("taller \n");
}
else
{
    printf("Abnoraal height");
}
}
