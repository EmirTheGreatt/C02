char    *ft_strupcase(char *str)
{
	int index;
	char ch;
	index = 0;
	while (ch = str[index])
	{
		if (ch <= 'Z' && ch >= 'A')
			ch = ch + 'a' - 'A';
		index++;
	}
	return str;
}