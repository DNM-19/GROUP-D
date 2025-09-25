#include<stdio.h>
int main(){
float length, width, radius, height;
float area, volume;
const float pi = 3.14;

printf("enter length:");
scanf("%f", &length);
printf("enter width:");
scanf("%f", &width);

area = length * width;
printf("Area of a Rectangle = %.2f\n\n", area);

printf("enter radius;");
scanf("%f", &radius);

area = pi * radius * radius;
printf("Area of a Circle = %.2f\n\n", area);


printf("enter radius:");
scanf("%f", &radius);
printf("enter height:");
scanf("%f", &height);

volume = pi * radius * radius * height;

printf("Volume of a cylinder = %.2f\n", volume);
return 0;
}

