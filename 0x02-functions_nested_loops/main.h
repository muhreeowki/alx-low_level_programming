#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>

int _islower(int c);
int _isalpha(int c);
int _abs(int);
int _putchar(char c);
int print_sign(int n);
int print_last_digit(int);
int add(int, int);
void print_alphabet_x10(void);
void print_alphabet(void);
void print_to_98(int n);
void print_times_table(int n);
void jack_bauer(void);
void times_table(void);

/**
 * print_num - Helper function to recursivly print the individual
 * digits of an integer n using only the putchar function.
 *
 * @n: integer to be printed
 */

void _printnum(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n / 10)
		_printnum(n / 10);

	putchar(n % 10 + '0');
}

#endif
