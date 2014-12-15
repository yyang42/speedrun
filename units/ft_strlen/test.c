#include <assert.h>
#include <string.h>
#include <stdio.h>

int		ft_strlen(char *s);

int		main(void)
{
	assert(ft_strlen("") == 0);
	assert(ft_strlen("abc") == 3);
	return (0);
}
