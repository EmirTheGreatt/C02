#define LASTPRINTABLE 126
#define FIRSTPRINTABLE 32
int	ft_str_is_printable(char *str)
{
	int index;
	char ch;
	index = 0;
	while (ch = str[index])
	{
		if (ch < FIRSTPRINTABLE || ch > LASTPRINTABLE)
		{
			return 0;
		}
		index++;
	}
	return 1;
}