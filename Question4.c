#include<stdio.h>
#include<conio.h>

int main(){
float A,R;
printf("Enter the radius of the circle\n");
scanf("%f",&R);
A= 3.14*R*R;
printf("Area of circle is %.2f having the radius %.2f",A,R);
return 0;
}
