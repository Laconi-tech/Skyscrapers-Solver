void	inic(int tab[6][6], char *str)
{
	int i;
	int j;
	int c;

	i = -1;
	j = -1;
	c = 0;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (i == 0)
				tab[0][j + 1] = str[c] - 48;
			if (i == 1)
				tab[5][j + 1] = str[c] - 48;
			if (i == 2)
				tab[j + 1][0] = str[c] - 48;
			if (i == 3)
				tab[j + 1][5] = str[c] - 48;
			c += 2;
		}
	}
}
