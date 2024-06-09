#include "libft.h"
#include <stdio.h>
char	*kt_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}

int main(void)
{
	//ft_putendl_fd(ft_lltoa_base(LLONG_MAX, DEC_DIGITS), 1);
	printf("%s", kt_strtrim("   0011fgh111  000", "01 "));
	return (0);
}
