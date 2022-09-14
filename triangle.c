#include <stdio.h>
#include <math.h>

int main()
{

  double a;
  double b;
  double c;

  printf("------WE ARE GOING TO FIND THE HYPOTHENEUS OF OUR TRIANGE------\n");

  printf("Enter side a: ");
  scanf("%lf", &a);

  printf("Enter side b: ");
  scanf("%lf", &b);

  c = sqrt((a * a + b * b));

  printf("The Hypotheneus is %lf\n", c);

  printf("WELL DONE!!!!\n");

  return 0;
}