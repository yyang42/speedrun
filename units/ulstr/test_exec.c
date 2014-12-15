#include <stdio.h>
#include <assert.h>
#include <framework.h>
#include <stdlib.h>
#include <string.h>

static void test(char *input, char *exp)
{
	char cmd[1000];

	sprintf(cmd, "./a.out %s 2>&1", input);
	printf("[%s] -> [%s]\n", input, exec(cmd));
	assert(strcmp(exec(cmd), exp) == 0);
}

int	main(void)
{
	exec("gcc -Wall -Wextra -Werror sandbox/ulstr.c");
	test("aBc", "AbC");
	return (0);
}
