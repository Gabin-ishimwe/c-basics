#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
  srand(time(0));
  int randNum = (rand() % 10) + 1;
  int num;
  // bool result = false;
  while (true)
  {
    printf("Guess a number between 0 - 10 ");
    scanf("%d", &num);
    if (randNum == num)
    {
      printf("You got it great---------\n");
      break;
    }
    else if (num > randNum)
    {
      printf("Very high, try again....\n");
    }
    else if (num < randNum)
    {
      printf("Very low, try again....\n");
    }
  }
  return 0;
}