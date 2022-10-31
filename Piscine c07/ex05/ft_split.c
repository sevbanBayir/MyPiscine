#include<stdlib.h>
#include<stdio.h>

int is_sep(char c, char *sep)
{
    int i;

    i = 0;
    while (sep[i] != 0)
    {
        if (c == sep[i])
            return (1);
        i++;
    }
    return (0);
}

int word_count(char *str, char *sep)
{
    int i;

    i = 0;
    while (*str)
    {
        while (*str && is_sep(*str, sep))
            str++;
        if (*str && !is_sep(*str, sep))
        {
            i++;
            while (*str && !is_sep(*str, sep))
                str++;
        }
    }
    return (i);
}

char    *make_word(char *str, char *sep)
{
    char    *word;
    int i;

    i = 0;
    while (str[i] && !is_sep(str[i], sep))
        i++;
    word = (char *)malloc(sizeof(char) * (i + 1));
    i = 0;
    while (str[i] && !is_sep(str[i], sep))
    {
        word[i] = str[i];
        i++;
    }
    word[i] = 0;
    return (word);
}

char	**ft_split(char *str, char *charset)
{
    int i;
    char    **strs;

    strs = (char **)malloc(sizeof(char *) * word_count(str, charset) + 1);
    i = 0;
    while (*str)
    {
        while (*str && is_sep(*str, charset))
            str++;//Do not forget this is an assignment.
        if (*str && !is_sep(*str, charset))
        {
            strs[i] = make_word(str, charset);
            i++;
            while (*str && !is_sep(*str, charset))
                str++;
        }
    }
    strs[i] = (void *)0;
    return (strs);
}

int	main(int argc, char **argv)
{
	int		index;
	char	**split;
	(void)	argc;
	split = ft_split(argv[1], argv[2]);
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}

