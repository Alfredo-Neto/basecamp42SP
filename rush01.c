
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int linha;
	int coluna;
	linha = 1;
	coluna = 1;

	while (linha <= x)
	{
		coluna = 1;
		while (coluna <= y)
		{
			ft_putchar('*');
			coluna++;
		}
			ft_putchar('\n');
			linha++;
	}
}