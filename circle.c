#include <stdio.h>

int main()
{

  const float PI = 3.14;
  float radius;
  float area;
  float circ;

  printf("------WE ARE GOING TO CALCULATE AREA AND CIRCUMFERENCE OF CIRCLE-------\n");
  printf("Enter radius of the circle? ");
  scanf("%f", &radius);
  circ = 2 * radius * PI;
  area = radius * radius * PI;
  printf("Circumference of the circle is %.2f\n", circ);
  printf("Area of the circle is %.2f\n", area);

  printf("Where done !!!!!!!!\n");

  return 0;
}