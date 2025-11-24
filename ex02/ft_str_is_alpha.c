int ft_str_is_alpha(char *str)
{
	int index;
	char ch;
	index = 0;
	while (ch = str[index])
	{
		if (!((('a'<= ch) && ('z'>= ch)) || (('A'<= ch) && ('Z'>= ch))))
		{
			return 0;
		}
		index++;
	}
	return 1;
}