
#include <stdio.h>
#include "libftprintf.h"

int main()
{
    int count;
    int a = 0;
	
	count = printf("hello %L , how old are you ? %d ?\n",NULL , 0);
    ft_printf("nmbr printf oroginal is : %d\n\n", count);
    count = ft_printf("hello %L , how old are you ? %d ?\n", NULL , 0);
	printf("nmbr printf copy is : %d\n", count);
}