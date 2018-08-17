/*______________/\\\________________/\\\______________________________________*/
/*______________\/\\\_______________\/\\\_____________________________________*/
/*_______________\/\\\_______________\/\\\____________________________________*/
/*__/\\\\\\\\\____\/\\\_______________\/\\\______/\\\\\_____/\\\____/\\\______*/
/*__\////////\\\___\/\\\\\\\\\____/\\\\\\\\\____/\\\///\\\__\/\\\___\/\\\_____*/
/*_____/\\\\\\\\\\__\/\\\////\\\__/\\\////\\\___/\\\__\//\\\_\/\\\___\/\\\____*/
/*_____/\\\/////\\\__\/\\\__\/\\\_\/\\\__\/\\\__\//\\\__/\\\__\/\\\___\/\\\___*/
/*_____\//\\\\\\\\/\\_\/\\\\\\\\\__\//\\\\\\\/\\__\///\\\\\/___\//\\\\\\\\\___*/
/*_______\////////\//__\/////////____\///////\//_____\/////______\/////////___*/
/*____________________________________________________________________________*/
/*\                  \  \                              /  /                  /*/
/* \ Date: 30/12/2016 \  \ File: get_next_line.c      /  / Auth: abdou      / */
/*__\__________________\__\__________________________/__/__________________/__*/
#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

# define BUFF_SIZE 10000000
# define MAX_FD 5

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

int		get_next_line(int const fd, char **line);

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		i;

	i = 0;
	while (i < len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
		dst[i++] = '\0';
	return (dst);
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char*)b;
	while (len-- != 0)
	{
		*str = (unsigned char)c;
		str++;
	}
	return (b);
}

void		*ft_memalloc(size_t n)
{
	void	*mem;

	if (!(mem = (void *)malloc(sizeof(void) * n)))
		return (NULL);
	ft_memset(mem, 0, n);
	return (mem);
}

char	*ft_strnew(size_t size)
{
	void	*str;

	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(str, '\0', size + 1);
	return ((char *)str);
}

size_t	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (*(s++))
		count++;
	return (count);
}
char	*ft_strcpy(char *dst, const char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*s3;
	unsigned int	l1;

	if (!s1 || !s2)
		return (0);
	l1 = ft_strlen(s1);
	if (!(s3 = ft_strnew(l1 + ft_strlen(s2))))
		return (0);
	ft_strcpy(s3, s1);
	ft_strcpy(s3 + l1, s2);
	return (s3);
}

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	char	*s;

	if (!str || !(s = ft_strnew(len)))
		return (0);
	return (ft_strncpy(s, str + start, len));
}


int main()
{
	int		r1 = 1;
	int		r2 = 1;
	int		i = 1;
	int		err = 0;
	int		start = 0;
	int		end = 2000000;
	int		sysfd = open("test/system_output.txt", O_RDONLY);
	int		userfd = open("test/user_output.txt", O_RDONLY);
	char	*sysline;
	char	*userline;

	sysline = 0;
	userline = 0;

	do
	{
		r1 = get_next_line(sysfd, &sysline);
		r2 = get_next_line(userfd, &userline);
		if (i > start && strcmp(sysline, userline) != 0 )
		{
			printf("%d-->%s , %s\n", i, sysline, userline);	
			err++;
		}
//		printf("%d-->\n", i);	
		i++;
//		if (r2 == -1)
//			break;
		free(sysline);
		free(userline);
	}while(r1 == 1 && r2 == 1 && i < end);
	printf("total errors from %d to %d: %d\n", start, i, err);
/*	do
	{
		r1 = get_next_line(sysfd, &sysline);
		printf("%d\n", i++);
		free(sysline);

	}while(r1 == 1);
	i = 0;
	do
	{
		printf("%d\n", i++);
		r2 = get_next_line(userfd, &userline);
		free(userline);

	}while(r2 == 1);*/
//	close(sysfd);
//	close(userfd);
	return 0;
}


int		_strchr(const char *str, int *l)
{
	int		i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	*l += i;
	return (str[i] == '\n');
}

int		_next_next_line(char **static_buff, char **line, int fd)
{
	char	*buff;
	int		tmp;
	int		i;
	int		l;

	i = 1;
	l = 0;
	if ((tmp = _strchr(*static_buff, &l)) == 0)
	{
		while (tmp == 0 && (buff = ft_memalloc(BUFF_SIZE + 1))
			&& (i = read(fd, buff, BUFF_SIZE)) > 0)
		{	
			tmp = _strchr(buff, &l);
			*static_buff = ft_strjoin(*static_buff, buff);
		}
	}
	free(buff);
	if (i == -1)
		return (-1);
	*line = ft_strsub(*static_buff, 0, l);
	if (tmp == 0 && i == 0)
		return (0);
	*static_buff += l + 1;
	return (1);
}

int		get_next_line(int const fd, char **line)
{
	static char *static_buff[MAX_FD];
	char		*str;
	int			l;

	if (fd > MAX_FD)
		return (-1);
	if (!static_buff[fd])
		static_buff[fd] = ft_strnew(BUFF_SIZE);
	l = _next_next_line(&(static_buff[fd]), &str, fd);
	*line = str;
	return (l);
}

#endif