
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int linha;
	int coluna;
	linha = 1;
	

	while (linha <= x)
	{
		coluna = 1;
		while (coluna <= y)
		{
			if(linha == 1)
			{
				if(coluna == 1)
				{
					ft_putchar('/');
				}
				if(coluna == y)
				{
					ft_putchar('\\');
				}
				if(coluna > 1 && coluna < y)
				{
					ft_putchar('*');
				}
			}

			if(linha == x)
			{
				if(coluna == 1)
				{
					ft_putchar('\\');
				}
				if(coluna == y)
				{
					ft_putchar('/');
				}
				if(coluna > 1 && coluna < y)
				{
					ft_putchar('*');
				}
			}

			if(coluna > 1 && coluna < y)
			{
				if(coluna == 1)
				{
					ft_putchar('*');
				}
				if(coluna == y)
				{
					ft_putchar('*');
				}
				if(coluna > 1 && coluna < y)
				{
					ft_putchar(' ');
				}
			}
			
			
			coluna++;
		}
			ft_putchar('\n');
			linha++;
	}
}