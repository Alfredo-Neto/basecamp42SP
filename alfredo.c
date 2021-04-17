#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int        ft_input_valid(int argc, char **argv)
{
    char    *ptr;
    int        count;

    count = 0;
    ptr = argv[1];
    if (argc != 2)
        return (0);
    while (*ptr != '\0')
    {
        if (count % 2 != 0 && *ptr != 32)
            return (0);
        if (count % 2 == 0 && (*ptr < '1' || *ptr > '4'))
            return (0);
        ptr++;
        count++;
    }
    if (count != 31)
        return (0);
    return (1);
}
	return (0);
}




	