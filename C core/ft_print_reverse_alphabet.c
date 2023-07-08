#include <unistd.h>
#include <stdio.h>

// void	ft_print_alphabet(void)
// {
// 	char	letter = 'z';

// 	while (1)
// 	{
// 		write (1, &letter, 1);
// 		if (letter == 'a')
// 			break;
// 		letter --;
// 	}
// 	write (1, "\n", 1);
// }

void	ft_print_alphabet(void)
{
	char	letter = 'z';

	while (1)
	{
		printf("%c", letter);
		if (letter == 'a')
			break;
		letter --;
	}
	printf ("\n");
}

int	main(void)
{
	ft_print_alphabet();
	return 0;
}