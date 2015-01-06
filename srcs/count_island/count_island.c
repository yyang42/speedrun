#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int		ft_strlen(char *s)
{
	return (*s ? ft_strlen(++s) + 1 : 0);
}

void	print_map(char **map)
{
	while (*map)
	{
		write(1, *map, ft_strlen(*map));
		map++;
	}
}

void	mark_map(char **map, int j, int i, char c)
{
	if (!map[j])
		return ;
	if (map[j][i] != 'X')
		return ;
	map[j][i] = c;
	mark_map(map, j - 1, i, c);
	mark_map(map, j + 1, i, c);
	mark_map(map, j, i - 1, c);
	mark_map(map, j, i + 1, c);
}

void	infect_map(char **map)
{
	int i;
	int j;
	char c;

	j = 0;
	c = '0';
	while (map[j])
	{
		i = 0;
		while (map[j][i])
		{
			if (map[j][i] == 'X')
			{
				mark_map(map, j, i, c);
				c++;
			}
			i++;
		}
		j++;
	}
}

char	**get_map(char *s)
{
	char **map;
	int i;
	int j;

	map = (char **)malloc(100000);
	i = 0;
	j = 0;
	map[j] = (char *)malloc(1030);
	while (*s)
	{
		map[j][i] = *s;
		i++;
		if (*s == '\n')
		{
			map[j][i] = 0;
			i = 0;
			j++;
			map[j] = (char *)malloc(1030);
		}
		s++;
	}
	map[j] = NULL;
	return (map);
}

void	ft_strcat(char *s1, char *s2)
{
	while (*s1)
		s1++;
	while ((*s1++ = *s2++))
		;
}

char	*parsing(char *s)
{
	char *map;
	char buff[1025];
	int ret;
	int fd;

	map = (char *)malloc(1000000);
	ret = 1;
	fd = open(s, O_RDONLY);
	while ((ret = read(fd, buff, 1024)))
	{
		buff[ret] = 0;
		ft_strcat(map, buff);
	}
	return (map);
}

int		main(int ac, char **av)
{
	char *map_str;
	char **map;

	map_str = parsing(av[1]);
	map = get_map(map_str);
	infect_map(map);
	print_map(map);
	return (0);
}
