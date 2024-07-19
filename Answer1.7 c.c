#include <stdio.h>

int main(){
float widht, height, Area, perimeter;
printf("\n please Enter the widht and height of the rectangle\n");
scanf("%f%f",&widht, &height);

Area = widht*height;
perimeter = 2*(widht+height);
printf("\n Area of rectangle is: %.2f,Area ");
printf("\n perimeter or rectangle is :%.2f",perimeter);

return 0;

}
