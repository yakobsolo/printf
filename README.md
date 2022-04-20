# _Printf.\
 `int _printf ( const char * format, ... );`\
This is the first group project that we have at Holberton School, which consists of replicating the printf(3) function of language c, calling it this way _printf.\
This function is part of the standard library and to use it we must specify the header file <stdio.h>.\
Writes the C string pointed by format to the standard output (stdout). If format includes format specifiers (subsequences beginning with %), the additional arguments\ following format are formatted and inserted in the resulting string replacing their respective specifiers.\
Examples\
### String
- Input: _printf("%s\n", 'This is a string.');
-	Output: This is a string.
### Character\
- Input: _printf("The first letter in the alphabet is %c\n", 'A');
-	Output: The first letter in the alphabet is A
### Integer\
- Input: _printf("There are %i dozens in a gross\n", 12);
-	Output: There are 12 dozens in a gross
### Decimal:\
-	Input: _printf("%d\n", 1000);
-	Output: 1000
### Project Requirements\
-	Code must follow the Betty style
-	Global variables are not allowed
-	Authorized functions and macros:
  1. write (man 2 write)
  2. malloc (man 3 malloc)
  3.	free (man 3 free)
  4.	va_start (man 3 va_start)
  5.	va_end (man 3 va_end)
  6.	va_copy (man 3 va_copy)
  7. va_arg (man 3 va_arg)
 # [Flow Chart](https://docs.google.com/document/d/1KGMfHEsdLJTFXYyhCasAPz5dpWv3_QXRDQQc886jVbs/edit?usp=sharing)
### File Descriptions
-	_printf.c: - contains the fucntion _printf, which uses the prototype\
 `int _printf(const char *format, ...);`\
 The format string is composed of zero or more directives. See man 3 printf for more detail. _printf will return the number of characters printed (excluding the null byte used to end output to strings) and will write output to stdout, the standard output stream.
-	Programs and functions will be compiled with gcc -Wall -Werror -Wextra -pedantic *.c
-	_putchar.c: - contains the function _putchar, which writes a character to stdout.
-	main.h: - contains all function prototypes used for _printf.
-	man_3_printf: - manual page for the custom _printf function.
-	print_chars.c: - contains the functions print_c, print_s, print_S, and print_r which handle the **conversion specifiers** c, s, S, and r, respectively, as well as\hex_print, which prints a char's ascii value in uppercase hex
-	**print_numbers.c:** - contains the functions print_i and print_d, which handle the conversion specifiers i and d, respectively
-	**print_hex.c:** - contains the functions print_hex, which prints an unsigned int in hexidecimal form, print_x, print_X, and print_p, which handle the conversion specifiers x, X, and p, respectively
-	**print_unsigned_int.c:** - contains the functions print_u, print_o, and print_b, which handle the conversion specifiers u, o, and b, respectively
-	**print_rot13.c** - contains the function print_R, which handles the conversion specifier R
- **_printf.c:** - contains the fucntion _printf, which uses the prototype int _printf(const char *format, ...);. The format string is composed of zero or more directives. See man 3 printf for more detail. _printf will return the number of characters printed (excluding the null byte used to end output to strings) and will \write output to stdout, the standard output stream.
-	**_putchar.c:** - contains the function _putchar, which writes a character to stdout.
-	**main.h:** - contains all function prototypes used for _printf.
-	**man_3_printf:** - manual page for the custom _printf function.
-	**print_chars.c:** - contains the functions print_c, print_s, print_S, and print_r which handle the conversion specifiers c, s, S, and r, respectively, as well as \hex_print, which prints a char's ascii value in uppercase hex
-	**print_numbers.c:** - contains the functions print_i and print_d, which handle the conversion specifiers i and d, respectively
-	**print_hex.c:** - contains the functions print_hex, which prints an unsigned int in hexidecimal form, print_x, print_X, and print_p, which handle the conversion specifiers x, X, and p, respectively
-	**print_unsigned_int.c:** - contains the functions print_u, print_o, and print_b, which handle the conversion specifiers u, o, and b, respectively
-	**print_rot13.c** - contains the function print_R, which handles the conversion specifier R\
## Contributors \
[Yakob Solomon:](https://github.com/yakobsolo)\
[Mubarek Hussen:](https://github.com/MubarekHussen)




