#include <stdio.h>
#include <assert.h>

int ft_atoi(char *s);

int main(void)
{
	assert(ft_atoi("123") == 123);
	assert(ft_atoi("") == 0);
	printf("OK\n");
	return (0);
}
