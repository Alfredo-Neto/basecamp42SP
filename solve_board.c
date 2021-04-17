
char** possibilities;

int solve_board (int linha, int* board, int* inputs)
{
	char** para_testar;

	para_testar = possibilities;
	while (*para_testar != NULL)
	{
		copy_line(linha, para_testar, board);
		if (is_valid(board, linha, inputs))
		{
			if (linha == 3)
				return (1);
			if(solve_board(linha + 1, board, inputs))		
				return (1);
		}	
		para_testar++;
	}
	return (0);
}