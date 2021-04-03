#include <unistd.h>

void		rush(void)
{
	char c[6];
	c = '/***\\';
	write(1,&c, 5);
	
}