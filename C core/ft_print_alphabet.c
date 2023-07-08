#include <unistd.h>
#include <stdio.h>

// void	ft_print_alphabet(void)
// {
// 	char	letter = 'a';

// 	while (1)
// 	{
// 		write (1, &letter, 1);
// 		if (letter == 'z')
// 			break;
// 		letter ++;
// 	}
// 	write (1, "\n", 1);
// }

void	ft_print_alphabet(void)
{
	char	letter = 'a';

	while (1)
	{
		printf("%c", letter);
		if (letter == 'z')
			break;
		letter ++;
	}
	printf ("\n");
}

int	main(void)
{
	ft_print_alphabet();
	return 0;
}