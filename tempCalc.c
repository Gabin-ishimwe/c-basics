#include <stdio.h>
#include <ctype.h>

int main()
{

  float temp;
  char unit;

  printf("---THIS CALCULATOR WILL CHANGE TEMP FROM CELSIUS (C) TO FALHENHEIT (F) AND VICE VERSA------\n");

  printf("Enter which do you want to change to? ");
  scanf("%c", &unit);

  unit = toupper(unit);

  if (unit == 'C')
  {
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);

    temp = (temp * 9 / 5) + 32;

    printf("\nTemperature in Farenheit is %.2f", temp);
  }
  else if (unit == 'F')
  {
    printf("Enter temperature in Farenheit: ");
    scanf("%f", &temp);

    temp = ((temp - 32) * 5) / 2;
    printf("\nThe temperature in Celsius is %.2f", temp);
  }
  else
  {
    printf("Invalid temperature unit......\n");
  }

  return 0;
}