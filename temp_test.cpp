/*
   storage for temp test codes for reading books
*/

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main()
{
 	int a[3]={1,3,5};
 	int *p;
 	p=a;
 	printf("p is %p, p+1 is %p\n",p,p+1);
 	printf("a is %p, a+1 is %p\n",a,a+1);
	
//	double array[2] = {0};
//	double (*ptr)[2] = &array;
//	typedef double Point[2];
//	Point *ptr1 = &array;
//	Point array2;
//	int a[2][3]={4,3,7};
//	int (*p)[3];
//	int **pp;
//	p=a;
//	pp = (int **)a;
//	printf("a is %p, &a[0][0] is %p, p+1 is %p\n",a, &a[0][0], p+1);
//	printf("sizeof(int *) is %d\n",sizeof(int *));
//	printf("&a[1][0] is %p, pp is %p, pp+1 is %p\n",&a[1][0], pp,pp+1);
//
//	printf("a+1 is %p, &a[1] is %p, and &a+1 is %p\n",a+1,&a[1],&a+1);
//	printf("a+1 is %d, and a[0]+1 is %d\n",**(a+1),*(a[0]+1));
//	//pp=a;
//	printf("**a is %d\n",**a);
//	for (int i = 0; i < 2;i++)
//	{
//		array2[i]=array[i]+1;
//		printf("%lf\n",array2[i]);
//	}
	return 0;
}
