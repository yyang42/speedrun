int ft_atoi(char *s)
{
    int i;

    i = 0;
    while (*s)
        i = i * 10 + *s++ - '0';
    return (i);
}
