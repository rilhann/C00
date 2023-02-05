#include	<unistd.h>
#include	<stdio.h>

int	mert(char *ru)
{
	int r;
	r = 0;

	while (ru[r] != '\0')
	{
	r++;
	}
	return(r);
}

int	main()
{
	printf("%d", mert("rumeysa"));
}
	
