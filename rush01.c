
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
	//linha(x, '/', '*', '\\');
	//linha(x, '*', ' ', '*');
	//linha(x, '\\', '*', '//');

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
			linha(x, '*', ' ', '*');				
		}
		contar++;
	}



}

