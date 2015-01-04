#include <stdio.h>
#include <assert.h>
#include <string.h>

char	*ft_strjoin(char *s1, char *s2);

int		main(void)
{
	char s[100];

    bzero(s, 100);
    assert(strcmp(ft_strjoin("abc", "123"), "abc123") == 0);
    assert(strcmp(ft_strjoin("", ""), "") == 0);
    printf("OK ft_strjoin\n");
	return (0);
}
