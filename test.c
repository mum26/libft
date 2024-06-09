#include "libft.h"

int main(void)
{
	ft_putnbr_fd(get_u_num_of_digit_base(123456789012345678, ft_strlen(DEC_DIGITS)), 1);
	return (0);
}
