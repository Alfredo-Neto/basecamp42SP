#include <stdio.h>

int main(void)
{
	// criar uma matriz 4x4 que receba qualquer parametro 
	// preencha todas as posicoes com 0

	int matriz [4][4];

	matriz[0][0] = 0;
	matriz[0][1] = 0;
	matriz[0][2] = 0;
	matriz[0][3] = 0;
	matriz[1][0] = 0;
	matriz[1][1] = 0;
	matriz[1][2] = 0;
	matriz[1][3] = 0;
	matriz[2][0] = 0;
	matriz[2][1] = 0;
	matriz[2][2] = 0;
	matriz[2][3] = 0;
	matriz[3][0] = 0;
	matriz[3][1] = 0;
	matriz[3][2] = 0;
	matriz[3][3] = 0;


	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
        	printf("%d ", matriz[i][j]);
		    printf("\n");
	}

	return (0);
}
