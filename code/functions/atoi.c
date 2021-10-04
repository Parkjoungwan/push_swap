#include "push_swap.h"

int		ft_space(char c)
{
	if (c == '\t' || c == '\r' || c == '\n' ||
			c == ' ' || c == '\f' || c == '\v')
		return (1);
	return (0);
}

void	ft_isdigit(char chr)
{
	if (chr < '0' || chr > '9')
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	return ;
}

int		ft_atoi(char *str)
{
	int				pm;
	unsigned long	result;

	pm = 1;
	result = 0;
	while (ft_space(*str))
		str++;
	if (*str == '-')
	{
		pm = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		ft_isdigit(*str);
		result *= 10;
		result += *str - '0';
		str++;
	}
	if (result >= 9223372036854775808ULL)
		return (pm == 1 ? -1 : 0);
	return (result * pm);
}
