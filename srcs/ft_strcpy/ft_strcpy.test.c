#include <stdio.h>
#include <assert.h>
#include <string.h>

void	ft_strcpy(char *d, char *s);

int		main(void)
{
	char s[100];

	bzero(s, 100);
	ft_strcpy(s, "abc");
	assert(strcmp(s, "abc") == 0);
	printf("OK ft_strcpy\n");
	return (0);
}
