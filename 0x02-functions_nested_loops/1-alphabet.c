#include "main.h"
/**
 * main - prints the alphabet in lowercase, followed by a line
 * Return: Always 0
 */
void print_alphabet(void);
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
