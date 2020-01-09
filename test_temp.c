/*
** test_temp.c for test only in d:\Dropbox\我的坚果云\Codes\C_Lang
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Thu Jan 9 上午9:30:20 2020 frozenmaple
** Last update Fri Jan 9 上午9:30:25 2020 frozenmaple
*/



#include <stdio.h>
int main()
{
  /*temp area for check display result
  /*

  int n, m;
  n = 2;
  m = 1;
  n *= m + 3;
  printf("the value is %d\n", n);

  int i = 3, j = 6;
  int k1, k2, k3, k4, k5;
  k1 = -i++ + --j; //k1=2
  i = 3;
  j = 6;
  k2 = -i++ + j--; //k2=3
  i = 3;
  j = 6;
  k3 = -i++ - j--; //k3=-9
  i = 3;
  j = 6;
  k4 = -i++ - --j; //k4=-8
  i = 3;
  j = 6;
  k5 = -++i + --j; //k5=1
  printf("k1=%d, k2=%d, k3=%d, k4=%d, k5=%d\n", k1, k2, k3, k4, k5);
  */
  printf(      "hello\n");
  //demo for data loss in type converstion, maybe due to printf() realization principal
  int v1 = 10;
  float v2 = 20.05;
  char v3 = 'a';
  printf("v1= %f, v1= %d\n", v1, v1);
  printf("v1= %f, v1= %d\n\n", (float)v1, v1);

  printf("v1= %f, v2= %d\n", v1, v2);
  printf("v1= %f, v2= %d\n\n", (float)v1, v2);

  printf("v1= %f, v2= %d, v3= %c\n", v1, v3, v2);
  printf("v1= %f, v2= %d, v3= %c\n", (float)v1, v3, v2);
  //*/

  /*display special symbol
  //display back-slash
  printf("\\ \n");

  //two ways to display percent symbol
  printf("\% \n");
  printf("%% \n");
  */

  ///*demo for comments cannot be nested
  //  /*This is an error because you cannot /*nest*/ comments*/

  //*/

  return 0;
}
