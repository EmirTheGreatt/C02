char    *ft_strupcase(char *str)
{
	int index;
	char ch;
	index = 0;
	while (ch = str[index])
	{
		if (ch <= 'z' && ch >= 'a')
			ch = ch + 'A' - 'a';
		index++;
	}
	return str;
}