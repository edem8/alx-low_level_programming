#include <stdio.h>
#include <unistd.h>
/**
 *main - printing strings to standard error
 *
 *Return: return (1) or nothing
*/

int main(void)
{
write(2, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n",59);
return (1);
}
