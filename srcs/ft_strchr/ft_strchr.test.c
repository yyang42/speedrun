#include <stdio.h>
#include <assert.h>
#include <strings.h>

char	*ft_strchr(char *s, char c);

int		main(void)
{
	assert(strcmp(ft_strchr("ab", 'a'), "ab") == 0);
	assert(strcmp(ft_strchr("ab", 'b'), "b") == 0);
	printf("OK\n");
	return (0);
}
