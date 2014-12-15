int ft_strlen(char *s)
{
	return (*s ? ft_strlen(++s) + 1 : 0);
}
