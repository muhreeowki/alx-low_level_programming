#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>

void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
int _putchar(char c);
void print_times_table(int n);

/**
 * print_num - Helper function to recursivly print the individual
 * digits of an integer n using only the putchar function.
 *
 * @n: integer to be printed
 */

void print_num(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n / 10)
		print_num(n / 10);

	putchar(n % 10 + '0');
}

#endif
