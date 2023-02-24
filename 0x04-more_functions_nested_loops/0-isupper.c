#include "main.h"

/**
* _isupper - Check for uppercase character
* @c: the parameter to be checked
*Return:1 or 0
*/

int _isupper(int c)

{
	if (c >= "A" && c <= "Z")
		return (1);
	else
		return (0);
}
