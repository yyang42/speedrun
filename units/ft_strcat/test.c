#include <assert.h>
#include <string.h>

void	ft_strcat(char *s1, char *s2);

int	main(void)
{
	char s[1000] = "";

	ft_strcat(s, "aa");
	assert(strcmp(s, "aa") == 0);
	ft_strcat(s, "bb");
	assert(strcmp(s, "aabb") == 0);
	return (0);
}
