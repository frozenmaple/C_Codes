/*
   storage for temp test codes for reading books
*/

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>
#define STOP '|'

int main()
{
    char ch;
    bool inword=true;
    int word_count = 0;
    int line_count = 0;

    while ((ch = getchar())!= STOP)
    {
        if (isspace((ch))&&!inword)
        {
            /* code */
        }

    }
    return 0;
}
