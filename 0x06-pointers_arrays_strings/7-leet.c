#include "main.h"

/**
 * leet - encodes atring to 1337
 *
 * @s: parameter
 *
 * Return: string;
 */

char *leet(char *s)
{
	int strlen = 0;
	int count = 0;

	char lets[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	while (s[strlen] != '\0')
	{
		while (count < 10)
		{
			if (lets[count] == s[strlen])
			{
				s[strlen] = nums[count];
			}
			count++;
		}
		strlen++;
	}
	return (s);
}
