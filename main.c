#include <stdio.h>
#include <string.h>
#include "ft_printf.h"

// void	test(char *p, ...)
// {
// 	va_list	ar;
// 	int		i;

// 	i = 0;
// 	va_start(ar, p);
// 	while(p[i])
// 	{
// 		printf("%d\n",va_arg(ar, int));
// 		i++;
// 	}
// }

int main()
{
	// char *str;
	// char a; 
	
	// a = 0xf1;
	// str = "string.";
	// printf("\n---------\n");
	// printf("%d\n",printf("result real c --> %c (%c)x [s] ", str[4], 0));
	// printf("%d\n",ft_printf("result from c --> %c (%c)x [s] ", str[4], 0));

	// printf("---------\n");
	// printf("%d\n",printf("result real s --> %s  [s] ", str));
	// printf("%d\n",ft_printf("result from s --> %s  [s] ", str));

	// printf("---------\n");
	// printf("%d\n",printf("result real p --> %p  [s] ", str));
	// printf("%d\n",ft_printf("result from p --> %p  [s] ", str));

	// printf("---------\n");
	// printf("%d\n",printf("result real d --> %d  [s] ", -123));
	// printf("%d\n",ft_printf("result from d --> %d  [s] ", -123));

	// printf("---------\n");
	// printf("%d\n",printf("result real u --> %u  [s] ", 123));
	// printf("%d\n",ft_printf("result from u --> %u  [s] ", 123));

	// printf("---------\n");
	// printf("%d\n",printf("result real x --> %x  [s]", a));
	// printf("%d\n",ft_printf("result from x --> %x  [s]", a));

	// printf("---------\n");
	// printf("%d\n",printf("result real x --> %X  [s]", a));
	// printf("%d\n",ft_printf("result from x --> %X  [s]", a));

	// printf("---------\n");
	// printf("%d\n",printf("result real x --> %%  [s]"));
	// printf("%d\n",ft_printf("result from x --> %%  [s]"));

	// printf("%c %d %d %c  \n",'x', 0, '0', 0);
	// ft_printf("%c %d %d %c  ",'x', 0, '0', 0);
	ft_printf("\n\n[%s/%s]\n\n","YES", "NO");

	// test("name", 1, 2, 3, 4);
}

