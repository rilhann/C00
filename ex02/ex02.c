#include	<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char ru;
	ru = 'z';

	while (ru >= 'a')
	{
	write(1, &ru, 1);
	ru--;
	}
}

int	main()
{
	ft_print_reverse_alphabet();
}
