int		antidouble(int tab[6][6], int lin, int col, int val);
int		critaire(int tab[6][6], int lin, int col, int val);
void	aff(int tab[6][6]);

int		solv(int tab[6][6], int lin, int col)
{
	char val;

	val = 1;
	while (val < 5)
	{
		tab[lin][col] = val;
		if (antidouble(tab, lin, col, val) && critaire(tab, lin, col, val))
		{
			if (col <= 3)
				solv(tab, lin, col + 1);
			else
			{
				if (lin <= 3)
					solv(tab, lin + 1, 1);
				else
				{
					aff(tab);
				}
			}
		}
		val++;
	}
	return (0);
}
