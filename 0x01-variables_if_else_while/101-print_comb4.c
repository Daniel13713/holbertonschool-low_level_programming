#include <stdio.h>

/**
 * main - Function tha print to alphabet
 *
 * Return: Always (0) sucess
 */
int main(void)
{
        int n;
        int i;
	int j;

        for (n = 48; n <= 56; n++)
        {
                for (i = n + 1; i <= 57; i++)
                {
                        for (j = i + 1; j <= 57; j++)
			{
				putchar(n);
                        	putchar(i);
				putchar(j);
			
                        	if (n != 55 || i != 56 || j != 57 )
                        	{
                                	putchar(44);
                                	putchar(32);
                        	}
			}
                }
        }
        putchar(10);
        return (0);
}
