#include <stdio.h>
int _isdigit(int c)
{
	if(c == '0' &&  c <= '9')
	{
		return (1);
		c++;
	} else {
		return (0);
	}
}
