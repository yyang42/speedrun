#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

char *exec(char *cmd)
{
	FILE *fp;
	char buf[1035];
	char *out;

	out = malloc(0);

	fp = popen(cmd, "r");

	/* Read the output a line at a time - output it. */
	while (fgets(buf, sizeof(buf)-1, fp) != NULL) {
		out = realloc(out, strlen(out) + strlen(buf) + 1);
		strcat(out, buf);
	}
	pclose(fp);
	return (out);
}
