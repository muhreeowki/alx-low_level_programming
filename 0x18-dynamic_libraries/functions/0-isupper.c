/**
 * _isupper - checks if the character c is an uppercase letter.
 *
 * @c: character to be checked
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
