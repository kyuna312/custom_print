# custom_print
#C , # C custom print

# printf

### Description

------------


The printf function sends formatted output to stdout.
A custom _printf() for learning purposes was developed by cohort  #9 students Jimmer and Edward Ortiz.
_printf() function format string is a character string, beginning and ending in its initial shift state, if any. 
These arguments are placed using the percentage '%' operator

------------


#### Resources

------------


Secrets of printfby Don colton
https://www.cypress.com/file/54761/download

------------



#### Authorized functions and macros

------------


write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

------------

#### Compilation

------------



The code must be compiled this way:

**$ gcc -Wall -Werror -Wextra -pedantic *.c**

As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)

The main files will include your main header file (holberton.h): **#include holberton.h**

------------

#### Use & Examples


------------

**Prototype:** int _printf(const char *format, ...);
**Use - General:** _printf("format string", var1, var2, ...);

**Examples:**
 - Basic String: _printf("%s Holberton", "Hello");`
	 - Output: Hello Holberton

- Print integers: _printf("This is an array element: arr[%d]:%c", 32, arr[32]);`
	- Output: This is an array element arr[32]:A

Many other specifiers and flags were added and by combinig those the _printf() function generate a different ouput. The following list are the specifiers and flags allowed.

------------

#### Use & Examples


------------

###### Specifiers

Specifier                |Output                        |Examples |
|----------------|-------------------------------|-----------------------------|
| `c` | Character | y |
| `d` or `i` | Signed integer | 1024, -1024 |
| `s` | String of characters | Hello Holberton |
| `b` | Binary Representation of unsigned integer | 01010110 |
| `u` | Unsigned integer | 1024 |
| `o` | Unsigned octal | 432 |
| `x` | Unsigned hexadecimal integer | 3ca |
| `X` | Unsigned hexadecimal integer (uppercase) | 3CA |
| `S` | String with hex-ascii value replacing special chars | \x0A\x0A |
| `p` | Pointer address | 0x403212 |
| `r` | Reversed string of characters | dlroW olleH |
| `R` | ROT13 Translation of string | Uryyb |

###### Flags (In development...)

|Flag                |Description                        |
|----------------|-------------------------------|
| `-` |Left-justify the output within the field width that was given; Right justification is the default (see _width_ sub-specifier). |
| `+` |Preceeds the result with a plus or minus sign (`+` or `-`) even for positive numbers. By default, only negative numbers are preceded with a `-` sign. |
| `(space)` |If no sign is going to be written, a blank space is inserted before the value. |
| `#` |Used with `o`, `x` or `X` specifiers the value is preceeded with 0, 0x or 0X respectively for values different than zero. |
| `0` |Left-pads the number with zeroes (`0`) instead of spaces when padding is specified (see _width_ sub-specifier). |

###### Width (In development...)

|Width                |Description                        |
|----------------|-------------------------------|
| `(number)` |Minimum number of characters to be printed. If the value to be printed is shorter than this number, the result is padded with blank spaces. The value is not truncated even if the result is larger.|
| `*` | The _width_ is not specified in the _format_ string, but as an additional integer value argument preceding the argument that has to be formatted.|

### Precision (In development...)

|.Precision               |Description                        |
|----------------|-------------------------------|
| `.(number)` |**For integer specifiers (`d`, `i`, `o`, `u`, `x`, `X`):** _precision_ specifies the minimum number of digits to be written. If the value to be written is shorter than this number, the result is padded with leading zeros. The value is not truncated even if the result is longer. A _precision_ of 0 means that no character is written for the value 0. **For `s`**: this is the maximum number of characters to be printed. By default all characters are printed until the ending null character is encountered. If the period is specified without an explicit value for _precision_, 0 is assumed. |

### Lenght modifiers (In development...)

|Modifier/Specifier  |`d` & `i`  |`u`, `o`, `x`, `X` |`c` |`s` |`p` |
|----------------|---------|------------|-------------|-----|-------|
| `none` | int |unsigned int | int| char pointer| void pointer |
| `h` |short int|unsigned short int |     |     |              |
| `l` |long int |unsigned long int  |     |     |              |

------------

#### Files contained in this repository


------------

|Name                |Information                        |Relevant Files                         |
|----------------|-------------------------------|-----------------------------|
|`man_3_printf`|Man page of the _printf() function.| `None` |
|`holberton.h`	| Header file with the data type struct, standard libraries and custom prototypes.| `*.c compilation` |
|`_printf.c`|Main printf function file. Calls other functions.|`printf_(name of var).c file` |
|`printf_37.c`|Contains percentage print function.|`None` |
|`printf_int.c` | Contains decimal and integer functions. | `None` | 
`printf_char.c` | Custom function for char data type. | `None`
|`printf_sting.c` | Function that calls string type variable. | `None` |
|`printf_bin.c` | Function that gets the binary | `None` |
`printf_oct.c` | Functions that returns octal number. | `None` |
`printf_hex.c` | Calls hexadecimal numbers (lowercase). | `None` | 
`printf_HEX.c` | Calls hexadecimal numbers (Uppercase). | `None` |
`printf_unsigned.c` | Returns an unisgined data type. | `None` |
`printf_hex_aux.c` | Auxiliar function for hexadecimal specific functions (lowercase). | `printf_exclusive_string.c` | 
`printf_HEX_aux.c` | Auxiliar function hexadecimal specific functions (Uppercase). | `printf_p.c` |
`printf_exclusive_string.c` | Returns a string and non readable characters are printed in hexadecimal numbers (Lowercase). | `printf_hex_aux.c` |
`printf_srev.c` | Returns a string in reverse. | `None` |
`printf_rot13.c` | Returns a string in Rot13. | `None` |
`printf_str.c` | Auxiliar functions such as strlen and strcpy. | `None` |
`_putchar.c` | Custom putchar function. | `None` |


------------

#### Tasks required for this project


------------

0. ###### I am not going anywhere. You can print that wherever you want to. I'm here and I am a Spur for life1.  I am not going anywhere. You can print that wherever you want to. I'm here and I am a Spur for life. 
Write a function that produces output according to a format.
Handle the following conversion specifiers:
- c
- s
- %

1. ###### Education is when you read the fine print. Experience is what you get if you dont
Handle the following conversion specifiers:
- d
- i

2. ###### Just because its in print doesn't mean its the gospel
Create a man page for the function

3. ###### With a face like mine, I do better in print
Handle the following conversion specifiers:
- b

4. ###### What one has not experienced, one will never understand in print
Handle the following conversion specifiers:
- u
- x
- o
- x
- X

5. ###### Nothing in fine print is ever good news
Use a local buffer of 1024 chars in order to call write as little as possible.

6. ###### Handle the following custom conversion specifier
- S : prints the string.
- Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters).

7. ###### How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
Handle the following conversion specifier: p

8. ###### The big print gives and the small print takes away
Handle the following flag characters for non-custom conversion specifiers:
- ´+´
- space
- ´#´ 

9. ###### Sarcasm is lost in print
Handle the following length modifiers for non-custom conversion specifiers:
- l
- h
Conversion specifiers to handle: d, i, u, o, x, X

10. ###### Print some money and give it to us for the rain forests
Handle the field width for non-custom conversion specifiers.

11. ###### The negative is the equivalent of the composer's score, and the print the performance
Handle the precision for non-custom conversion specifiers.

12. ###### It's depressing when you're still around and your albums are out of print
Handle the 0 flag character for non-custom conversion specifiers.

13. ###### Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
Handle the - flag character for non-custom conversion specifiers.

14. ###### Print is the sharpest and the strongest weapon of our party
Handle the following custom conversion specifier:
 - r : prints the reversed string

15. ###### The flood of print has turned reading into a process of gulping rather than savoring 
Handle the following custom conversion specifier:
- R: prints the rot13'ed string

16. ###### *
All the above options work well together.

### Authors &copy;

- maririn312


# _printf

A formatted output conversion C program completed as part of the low-level programming and algorithm track at Holberton School. The program is a pseudo-recreation of the C standard library function, `printf`.

## Description
The function `_printf` writes output to standard output. The function writes the output under the control of a `format` string that specifies how subsequent arguments (accessed via the variable-length argument facilities of `stdarg`) are converted for output.

### Return Value
Upon successful return, `_printf` returns the number of characters printed (excluding the terminating null byte used to end output to strings). If an output error is encountered, the function returns `-1`.

### Format of the Argument String
The `format` string argument is a constant character string composed of zero or more directives: ordinary characters (not `%`) which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments. Conversion specification is introduced by the character `%` and ends with a conversion specifier. The arguments must correspond with the conversion specifier, and are used in the order given.

### Conversion Specifiers

The conversion specifier (introduced by the character `%`) is a character that specifies the type of conversion to be applied. The conversion specifiers and their meaning are:

* **d, i**

The `int` argument is converted to signed decimal notation.

* **b**

The `unsigned int` argument is converted to signed decimal notation.

* **o, u, x, X**

The `unsigned int` argument is converted to unsigned octal (`o`), unsigned decimal (`u`), or unsigned hexadecimal (`x` and `X`). The letters `abcdef` are used for `x` conversions and the letters `ABCDEF` are used for `X` conversions.

* **c**

The `int` argument is converted to an `unsigned char`.

* **s**

The `const char *` argument is expected to be a pointer to a character array (aka. pointer to a string). Characters from the array are written starting from the first element of the array and ending at, but not including, the terminating null byte (`\0`).

* **S**

Identical to the `s` conversion specifier, except any non-printable characters in the array (ie. characters with an ASCII value < 32 or >= 127) are written as `\x` followed by the ASCII code value in hexadecimal (upper case, two characters).

* **r**

Identical to the `s` conversion specifier, except characters from the array are written in reverse, starting from, but not including, the terminating null byte (`\0`) and ending at the first element of the array.

* **R**

Identical to the `s` conversion specifier, except each character of the array is converted to its corresponding character in ROT13 before being written.

* **p**

The address of the argument is written. The address is written in hexadecimal with a leading `0x`.

* **%**

A `%` is written. No argument is converted. The complete conversion specification is `%%`.

## Example
To print the address of Holberton School in the format "972 Mission St., San Francisco, CA 94103" where *street*, *city* and *state* are pointers to strings:

> `#include "holberton.h"`
>
> `int main(void)`
>
> `char *street = "Mission St.", *city = "San Francisco", *state = "CA";`
>
> `printf("%d %s, %s, %s %d\n", 972, street, city, state, 94103);`

Output in terminal:

> `~$ 972 Mission St., San Francisco, CA 94103`

## Authors


## Acknowledgements
The `_printf` function emulates functionality of the C standard library function `printf`. This README borrows from the Linux man page [printf(3)](https://linux.die.net/man/3/printf).

This program was written as part of the curriculum for Holberton School. Holberton School is a campus-based full-stack software engineering program that prepares students for careers in the tech industry using project-based peer learning. For more information, visit [this link](https://www.holbertonschool.com/).

<p align="center">
  <img src="http://www.holbertonschool.com/holberton-logo.png">
</p>
