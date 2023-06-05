void	ft_putchar(char c);

void	aff(int tab[6][6])
{
	int i;
	int j;

	i = 1;
	j = 1;
	if (tab[0][0] != 1)
	{
		while (i < 5)
		{
			j = 1;
			while (j < 5)
			{
				ft_putchar(tab[i][j] + 48);
				if (j != 4)
					ft_putchar(' ');
				j++;
			}
			ft_putchar('\n');
			i++;
		}
		tab[0][0] = 1;
	}
}
