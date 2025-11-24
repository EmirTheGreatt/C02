int ft_str_is_lowercase(char *str)
{
	int index;
	char ch;
	index = 0;
	while (ch = str[index])
	{
		if (ch < 'A' || ch > 'Z')
		{
			return 0;
		}
        index++;
	}
	return 1;
}