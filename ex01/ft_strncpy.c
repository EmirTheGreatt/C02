char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int index;
	index = 0;
	while(src[index] && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	while(index < n)
	{
		src[index] = '\0';
		index++;
	}
}