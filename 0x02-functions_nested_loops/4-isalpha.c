/**
 *int _isalpha - Write a function that checks for alphabetic character
 * Return: 1 if c is a letter, lowercase or uppercase. 0 for the rest
* @c: The character in ASCII code
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
