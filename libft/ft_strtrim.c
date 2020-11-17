#include "libft.h"

char	*ft_strtrim(char const *s)
{
	/*size_t	i;
	size_t	start;
	size_t	end;
	char	*trimmed;

	i = 0;
	start = 0;
	if (!s)
		return (NULL);
	end = ft_strlen(s);
	while (s[start] && ft_iswhitespace(s[start]))
		start++;
	while (start < end && s[end - 1] && ft_iswhitespace(s[end - 1]))
		end--;
	if (!(trimmed = (char*)malloc(sizeof(char) * ((end - start) + 1))))
		return (NULL);
	while (i < (end - start))
	{
		trimmed[i] = s[start + i];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);

	*/unsigned int i;
	unsigned int b;
	char *a;
	
	if (!s)
		return (NULL);
	i = 0;
	b = (ft_strlen(s + 1));
	while (s[i] && ft_iswhitespace(s[i]))
			i++;
	if (i == ft_strlen(s))
		return (ft_calloc(1, 1));
	while(s[b] && ft_iswhitespace(s[b]))
		b--;
	if(!(a = ft_substr(s, i, (b - i + 1))))
		return (NULL);
	a[b - i + 1] = '\0';
	return (a);
}