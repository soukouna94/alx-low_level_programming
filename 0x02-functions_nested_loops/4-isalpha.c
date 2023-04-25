#include "main.h"
/**
 * _isalpha - Entry Point
 *@e: the character to check
 * Description: Checks whether a character is in lower or uppercase
 * Return: Always 0 (Success)
 */
int _isalpha(int e)
{
	return (e >= 'a' && e <= 'z') || (e >= 'A' && e <= 'Z');
}
