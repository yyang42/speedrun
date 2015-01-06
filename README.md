# [minirush] Speedrun: Comment coder deux fois plus vite en exam !

Le but du Speedrun est de vous entrainer a coder les fonctions de base rapidement et efficacement. Par exemple, coder un [strcat](https://github.com/yyang42/speedrun/blob/master/srcs/ft_strcat/ft_strcat.c) en moins de 20sec en 2 lignes, ou un [atoi](https://github.com/yyang42/speedrun/blob/master/srcs/ft_atoi/ft_atoi.c) en 30sec.

```
void	ft_strcat(char *s1, char *s2)
{
	while (*s1)
		s1++;
	while ((*s1++ = *s2++))
		;
}
```

# A. Consignes générales pour le minirush du 6 janvier
1. Mettez-vous en binômes sur un seul poste.
2. Commencez le training en choisisant les fonctions ci-dessous qui vous intéressent. C'est dans l'ordre croissant de difficulté. Nous conseillons de les faire dans l'ordre.
3. Pour chaque fonction, suivez la consigne B.

# B. Déroulement pour chaque fonction.
1. A tour de rôle, codez les fonctions de base (ci-dessous) le plus rapidement possible. Une personne code, l'autre chronometre.
(Nous conseillons de le faire 3 fois par personne par fonction.)
2. Notez votre temps sur le doc suivant: http://goo.gl/tBEO3f

# Fonctions

Niveau 1
ft_strlen
ft_strcat
ft_strcpy
ft_strdup
ft_strchr

Niveau 2
ft_atoi
ft_putnbr
ft_itoa
ft_strjoin
ft_strstr
ft_memcmp
ft_strcmp

Niveau 3
ft_sort_int
ft_sort_array

Niveau 4
count_island