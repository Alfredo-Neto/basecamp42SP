
void	ft_putchar(char c);


void linha(int x, char first, char middle, char last)
{
	int contar = 1; 
	while (contar <= x)
	{
		if (contar == 1)
		{
			ft_putchar(first);
		}	
	else if (contar == x)
		{
			ft_putchar(last);
		}
	else
	{
		ft_putchar(middle);
	}  
	contar++;
	}
	ft_putchar('\n');		
}
void	rush(int x, int y)
{
	int linha;
	int coluna;
	linha = 1;
	

	//y = 4

	int contar = 1;
	while (contar <= y)
	{	
		if (contar == 1)
		{
			linha(x, '/', '*', '\\');	
		}
		else if (contar == y)
		{
			linha(x, '\\', '*', '/');
		}
		else 
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
		contar++;
	}



}

