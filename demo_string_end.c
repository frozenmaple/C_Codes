//demo for string end symbol '\0' , compare with char '0'
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20] = {'0'}; //文本文件里的0，'0'
                          //数值的0，'\0'
    printf("%d %d", str[0], str[1]);

    return 0;
}
