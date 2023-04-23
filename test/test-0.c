#include "main.h"

int main(void)
{

	int len, len2;
	_printf("Hello, world\n%d + %i = %d\nThis is string: %s\nThis is char: %c\b\n"
		 , 2, 2, 4, "Eid Mobarak", 'Y');
	len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
	return 0;
}
