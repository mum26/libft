#include "libft.h"

char	*ft_lltoa_base(long long lln, char *base)
{
	char				*tmp;
	char				*str;
	unsigned long long	ulln;

	if (0 <= lln)
	{
		ulln = (unsigned long long)lln;
		return (ft_ulltoa_base(ulln, base));
	}
	if (lln == LLONG_MIN)
		ulln = (unsigned long long)(-(lln + 1)) + 1;
	else
		ulln = (unsigned long long)-lln;
	tmp = ft_ulltoa_base(ulln, base);
	if (!tmp)
		return (NULL);
	str = ft_strjoin("-", tmp);
	free(tmp);
	if (!str)
		return (NULL);
	return (str);
}
