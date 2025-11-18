#include <stddef.h> 
#include "variadic_functions.h"

int main(void)
{
	print_strings(", ", 2, "Jay", "Django");
	print_strings(", ", 4, "Jay", NULL, "Django", "Hi");
	print_strings(NULL, 3, "Hello", "world", NULL);
	return (0);
}

