#include <stdio.h>
#include <assert.h>
#include <strings.h>

void	ft_strcat(char *s1, char *s2);

int		main(void)
{
	char s[100];

	bzero(s, 100);
    ft_strcat(s, "abc");
    assert(strcmp(s, "abc") == 0);
    ft_strcat(s, "123");
    assert(strcmp(s, "abc123") == 0);
	printf("OK\n");
	return (0);
}
