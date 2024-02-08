0x14. C - Bit Manipulation


README.md
Project Title
Binary Operations in C

Project Description
This repository contains a set of C functions for performing binary operations on unsigned integers. The functions provided cover a range of operations, including binary-to-decimal conversion, printing binary representation, retrieving, setting, and clearing specific bits, flipping bits, and checking the endianness of the system.

Functions
binary_to_uint

Description: Converts a binary string to an unsigned integer.
Prototype: unsigned int binary_to_uint(const char *b);
print_binary

Description: Prints the binary representation of an unsigned long integer.
Prototype: void print_binary(unsigned long int n);
get_bit

Description: Gets the value of a specific bit at a given index.
Prototype: int get_bit(unsigned long int n, unsigned int index);
set_bit

Description: Sets the value of a specific bit at a given index to 1.
Prototype: int set_bit(unsigned long int *n, unsigned int index);
clear_bit

Description: Sets the value of a specific bit at a given index to 0.
Prototype: int clear_bit(unsigned long int *n, unsigned int index);
flip_bits

Description: Counts the number of bits needed to flip to convert one number to another.
Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
_atoi

Description: Converts a string to an integer.
Prototype: int _atoi(const char *s);
_putchar

Description: Writes a character to the standard output.
Prototype: int _putchar(char c);
get_endianness

Description: Checks the endianness of the system (little or big-endian).
Prototype: int get_endianness(void);
