/*
** test_temp9.c for final test review in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Sat Oct 12 上午9:38:53 2019 frozenmaple
** Last update Mon Nov 17 下午8:42:49 2019 frozenmaple
*/

#include <stdio.h>
#include <string.h>
int main()
{
    /*
    int a, b;
    int *p1, *p2;
    a = 2;
    b = 1;
    p1 = &a;
    p2 = &b;
    b = *p1;
    printf("*p1 = % d, *p2 = %d\n", *p1, *p2);
    *p1 = 15;
    printf("a = %d, b = %d\n", a, b);
    *p1 = *p1 + 3;
    printf("a = %d, b = %d\n", a, b);
    *p2 = *p1;
    printf("a = %d, b = %d\n", a, b);
    (*p1)--;
    printf("a = %d, *p2 = %d\n", a, *p2);
    p2 = p1;
    *p1 = 50;
    printf("a = % d, b = % d\n", a, b);
    */

    
    int a[3][2] = {{4, 6}, {1, 3}, {9, 7}};
    printf("%d\n", **a);
    printf("%d\n", *(*(a+1)) );
    printf("%d\n", *(*(a + 2) + 1));
    return 0;
}








