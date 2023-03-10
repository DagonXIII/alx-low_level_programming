/**
 * _isalpha - checks for alphabetic character
 * @c: the character to check
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
  return (_islower(c) || _isupper(c));
}
