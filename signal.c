#include"simple_shell.h"
/** 
*sig - signal handler
*@signal: input
*/
void sig(int signal)
{
	if (signal == SIGINT)
	{
		_putchar(' ');
		_putchar('>');
		_putchar(' ');
	}
}
