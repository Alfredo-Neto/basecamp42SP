#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const **argv)
{    
    int column = 6;
    int line = 6;
    int i = 0;
    int j = 0;
    int input[16];
    char m[6][6];

    // printf("%d\n", argc);
     // for(int i = 0; i < argc; i++) 
    // {
    //     printf("Valor de argv[argc %d]: %s\n", i, argv[i]);
    // }

    while(argv[1][i] != '\0')
    {
        if(argv[1][i] >= '1' && argv[1][i] <= '4')
        {            
            input[j] = atoi(&argv[1][i]);
            j++;
        }
        i++;
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            m[i][j] = 0;
        }        
    }    

    m[0][1] = input[0];
    m[0][2] = input[1];
    m[0][3] = input[2];
    m[0][4] = input[3];
    m[5][1] = input[4];
    m[5][2] = input[5];
    m[5][3] = input[6];
    m[5][4] = input[7];
    m[1][0] = input[8];
    m[2][0] = input[9];
    m[3][0] = input[10];
    m[4][0] = input[11];
    m[1][5] = input[12];
    m[2][5] = input[13];
    m[3][5] = input[14];
    m[4][5] = input[15];

    // for (int i = 0; i < 16; i++)
    // {
    //     printf("%d ", input[i]);
    // }

    for (int l = 0; l < line; l++)
    {
        for (int c = 0; c < column; c++)
        {
            if (m[l][c] != 0)
                printf("%d ", m[l][c]);
            else
                printf("  ");            
        }
        printf("\n");
    }
    return 0;
}