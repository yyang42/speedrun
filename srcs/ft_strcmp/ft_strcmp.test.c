#include <stdio.h>
#include <assert.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	assert(ft_strcmp("ab", "ab") == 0);
	assert(ft_strcmp("ac", "ab") > 0);
	assert(ft_strcmp("aa", "ab") < 0);
	printf("OK ft_strcmp\n");
	return (0);
}
