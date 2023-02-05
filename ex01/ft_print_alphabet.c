#include	<unistd.h>

void	ft_print_alphabet(void)
{
	char ru;
	ru = 'a';

	while (ru <= 'z')
	{
	write(1, &ru, 1);
	ru++;
	}
}

int	main()
{
	ft_print_alphabet();
}
