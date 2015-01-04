#include <stdio.h>
#include <assert.h>
#include <string.h>

char	*ft_strdup(char *s);

int		main(void)
{
	char s1[100];

    assert(strcmp(ft_strdup("abc"), "abc") == 0);
    assert(strcmp(ft_strdup(""), "") == 0);
    assert((long)s1 != (long)ft_strdup(s1));
    printf("OK ft_strdup\n");
	return (0);
}
