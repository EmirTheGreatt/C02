int ft_str_is_numeric(char *str)
{
	int index;
	char ch;
	index = 0;
	while (ch = str[index])
	{
		if (ch < '0' || ch > '9')
		{
			return 0;
		}
        index++;
	}
	return 1;
}