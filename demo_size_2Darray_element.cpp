//demo for the size of 2-D array and element
#include <stdio.h>

int main()
{
  int a[3][2];
  printf("the size of 2-D array is %d\n", sizeof(a));
  printf("the size of 1-D array is %d\n", sizeof(a[0]));
  printf("the size of 1 element is %d\n", sizeof(a[0][0]));
  return 0;
}
