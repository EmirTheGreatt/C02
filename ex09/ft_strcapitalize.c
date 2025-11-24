int is_lowercase(char ch){
	if (ch<='z' && ch >= 'a')
		return 1;
	return 0;
}
int	is_alphanumeric(char ch)
{
	if ((ch>= 'a' && ch <='z') || (ch>= 'A' && ch <='Z') || (ch<='9' && ch >= '0'))
		return 1;
	return 0;
}
char	*ft_strcapitalize(char *str)
{
	int	index;
	index = 1;
	if (is_lowercase(str[0]))
	{
		str[0] = str[0] + 'A' - 'a';
	}
	while (str[index])
	{
		if (!is_alphanumeric(str[index-1]) && is_lowercase(str[index]))
			str[index] += 'A'-'a';
	}
	return str;
}