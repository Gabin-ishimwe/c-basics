#include <stdio.h>
#include <string.h>

void sort(int size, int arr[]);
void printArr(int size, int arr[]);

int main()
{

  char x[15] = "water";
  char y[15] = "soda";
  char temp[15];

  strcpy(temp, x);
  strcpy(x, y);
  strcpy(y, temp);

  // printf("%s", x);
  // printf("%s", y);

  int arr[] = {2, 5, 8, 1, 10, 25, 3, 12};
  int sizeArr = sizeof(arr) / sizeof(arr[0]);

  sort(sizeArr, arr);

  return 0;
}

void sort(int size, int arr[])
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  printArr(size, arr);
}

void printArr(int size, int arr[])
{
  for (int i = 0; i < size; i++)
  {
    printf("%i ", arr[i]);
  }
}